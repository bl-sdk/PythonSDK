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

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0010
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableShadowCasting : 1;                         		// 0x0004 (0x0004) [0x0000000000001001] [0x00000001] ( CPF_Edit | CPF_Native )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) MISSED OFFSET
	unsigned long                                      bEnableCollision : 1;                             		// 0x000C (0x0004) [0x0000000000001001] [0x00000001] ( CPF_Edit | CPF_Native )
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x000C
struct FStaticMeshLODInfo
{
	TArray< struct FStaticMeshLODElement >             Elements;                                         		// 0x0000 (0x000C) [0x0000000000001041]              ( CPF_Edit | CPF_EditConstArray | CPF_Native )
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000100000]              
	int                                                NumChannels;                                      		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FVector                                     LinVel;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     AngVel;                                           		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned char                                      bNewData;                                         		// 0x0038 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x003C
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ContactNormal;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              ContactPenetration;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     ContactVelocity[ 0x2 ];                           		// 0x001C (0x0018) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMaterial[ 0x2 ];                              		// 0x0034 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0024
struct FCollisionImpactData
{
	TArray< struct FRigidBodyContactInfo >             ContactInfos;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     TotalNormalForceVector;                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     TotalFrictionForceVector;                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0014
struct FPhysEffectInfo
{
	float                                              Threshold;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReFireDelay;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             Effect;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UImpactDefinition*                           ImpactDefinition;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0014
struct FActorReference
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       Guid;                                             		// 0x0004 (0x0010) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct Engine.Actor.NavReference
// 0x0014
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       Guid;                                             		// 0x0004 (0x0010) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0034
struct FBasedPosition
{
	class AActor*                                      Base;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CachedBaseLocation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CachedBaseRotation;                               		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedTransPosition;                              		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.ResourcePoolReference
// 0x000C
struct FResourcePoolReference
{
	class AResourcePoolManager*                        PoolManager;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      PoolIndexInManager;                               		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      PoolGUID;                                         		// 0x0005 (0x0001) [0x0000000000000000]              
	class UResourcePool*                               Data;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x001C
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                         		// 0x0000 (0x0004) [0x0000000000100000]              
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                Item;                                             		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                LevelIndex;                                       		// 0x000C (0x0004) [0x0000000000100000]              
	struct FName                                       BoneName;                                         		// 0x0010 (0x0008) [0x0000000000100000]              
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0018 (0x0004) [0x0000000004180008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x005C
struct FImpactInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000100000]              
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000100000]              
	struct FVector                                     RayDir;                                           		// 0x001C (0x000C) [0x0000000000100000]              
	struct FVector                                     StartTrace;                                       		// 0x0028 (0x000C) [0x0000000000100000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0034 (0x001C) [0x0000000000180000]              ( CPF_Component )
	struct FVector                                     EndTrace;                                         		// 0x0050 (0x000C) [0x0000000000100000]              
};

// ScriptStruct Engine.AkEvent.AkPlayingInfo
// 0x0008
struct FAkPlayingInfo
{
	class UAkComponent*                                SourceComponent;                                  		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                AkPlayingId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x001C
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                QueuedActivations;                                		// 0x000C (0x0004) [0x0000000000000000]              
	class USequenceOp*                                 LinkedOp;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMoving : 1;                                      		// 0x0014 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bClampedMax : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasImpulse : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              ActivateDelay;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0014
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000100000]              
	TArray< float >                                    ChannelWeights;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.Actor.TraceNotifyInfo
// 0x0050
struct FTraceNotifyInfo
{
	class AActor*                                      ActorToNotify;                                    		// 0x0000 (0x0004) [0x0000000000100000]              
	class AActor*                                      ActorCallingTrace;                                		// 0x0004 (0x0004) [0x0000000000100000]              
	class UComponent*                                  ComponentHit;                                     		// 0x0008 (0x0004) [0x0000000004180008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              HitTime;                                          		// 0x000C (0x0004) [0x0000000000100000]              
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000100000]              
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000100000]              
	struct FVector                                     End;                                              		// 0x0028 (0x000C) [0x0000000000100000]              
	struct FVector                                     Start;                                            		// 0x0034 (0x000C) [0x0000000000100000]              
	struct FVector                                     Extent;                                           		// 0x0040 (0x000C) [0x0000000000100000]              
	int                                                TraceFlags;                                       		// 0x004C (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.Actor.TimerData
// 0x001C
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPaused : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       FuncName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              Rate;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Count;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TimerTimeDilation;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	class UObject*                                     TimerObj;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0018
struct FKeyValuePair
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x002C
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                        		// 0x0000 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Ping;                                             		// 0x0014 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                Score;                                            		// 0x0018 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                StatsID;                                          		// 0x001C (0x0004) [0x0000000000100001]              ( CPF_Edit )
	TArray< struct FKeyValuePair >                     PlayerInfo;                                       		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0060
struct FServerResponseLine
{
	int                                                ServerID;                                         		// 0x0000 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	struct FString                                     IP;                                               		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x0010 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                QueryPort;                                        		// 0x0014 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	struct FString                                     ServerName;                                       		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GameType;                                         		// 0x0030 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CurrentPlayers;                                   		// 0x003C (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                MaxPlayers;                                       		// 0x0040 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                Ping;                                             		// 0x0044 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	TArray< struct FKeyValuePair >                     ServerInfo;                                       		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPlayerResponseLine >               PlayerInfo;                                       		// 0x0054 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      AdvertisementType;                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.SettingsData
// 0x000C
struct FSettingsData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                Value1;                                           		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    Value2;                                           		// 0x0008 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0011
struct FSettingsProperty
{
	int                                                PropertyId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      AdvertisementType;                                		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x0010
struct FIdToStringMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000008002]              ( CPF_Const | CPF_Localized )
	unsigned long                                      bIsWildcard : 1;                                  		// 0x000C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0024
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ColumnHeaderText;                                 		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FStringIdToStringMapping >          ValueMappings;                                    		// 0x0018 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0040
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ColumnHeaderText;                                 		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      MappingType;                                      		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FIdToStringMapping >                ValueMappings;                                    		// 0x001C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSettingsData >                     PredefinedValues;                                 		// 0x0028 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              MinVal;                                           		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxVal;                                           		// 0x0038 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              RangeIncrement;                                   		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0018
struct FUniqueNetId
{
	struct FQWord                                      Uid;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      NpId[ 0x10 ];                                     		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0018
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0018) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C(0x0024 - 0x0018)
struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	struct FQWord                                      MachineId;                                        		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Trustworthiness;                                  		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0028
struct FNamedSession
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    SessionInfo;                                      		// 0x0008 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FOnlineRegistrant >                 Registrants;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineArbitrationRegistrant >      ArbitrationRegistrants;                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x000C
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     InterfaceObject;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x0048
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0018) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NickName;                                         		// 0x0018 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0024 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      NatType;                                          		// 0x0025 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                TitleId;                                          		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsLocal : 1;                                     		// 0x002C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsInPartyVoice : 1;                              		// 0x002C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bIsTalking : 1;                                   		// 0x002C (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bIsInGameSession : 1;                             		// 0x002C (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x002C (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	struct FQWord                                      SessionId;                                        		// 0x0030 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Data1;                                            		// 0x0038 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Data2;                                            		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Data3;                                            		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Data4;                                            		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x0038
struct FAchievementDetails
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     AchievementName;                                  		// 0x0004 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     HowTo;                                            		// 0x001C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class USurface*                                    Image;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      MonthEarned;                                      		// 0x002C (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DayEarned;                                        		// 0x002D (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      YearEarned;                                       		// 0x002E (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DayOfWeekEarned;                                  		// 0x002F (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                GamerPoints;                                      		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsSecret : 1;                                    		// 0x0034 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bWasAchievedOnline : 1;                           		// 0x0034 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bWasAchievedOffline : 1;                          		// 0x0034 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0010
struct FCommunityContentMetadata
{
	int                                                ContentType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSettingsProperty >                 MetadataItems;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0044
struct FCommunityContentFile
{
	int                                                ContentId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FileId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ContentType;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                FileSize;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                Owner;                                            		// 0x0010 (0x0018) [0x0000000000000000]              
	int                                                DownloadCount;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              AverageRating;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                RatingCount;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                LastRatingGiven;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     LocalFilePath;                                    		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x001C
struct FTitleFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      AsyncState;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0014
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     InterfaceClassName;                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x0034
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                  		// 0x0000 (0x0018) [0x0000000000000000]              
	struct FString                                     SendingPlayerNick;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsFriendInvite : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsGameInvite : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasAccepted : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasDenied : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     Message;                                          		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0020
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                         		// 0x0000 (0x0018) [0x0000000000000000]              
	float                                              LastNotificationTime;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasTalking : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsTalking : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRegistered : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	unsigned long                                      bHasVoice : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasNetworkedVoice : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRecognizingSpeech : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasTalking : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsTalking : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsRegistered : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0020
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0018) [0x0000000000000000]              
	int                                                TeamID;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0014
struct FSpeechRecognizedWord
{
	int                                                WordId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WordText;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Confidence;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceContent
// 0x0080
struct FMarketplaceContent
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OfferId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PreviewOfferId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     OfferName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OfferType;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            ContentId;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsUnrestrictedLicense : 1;                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LicenseMask;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                ContentCategory;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     TitleName;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUserHasPurchased : 1;                            		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PackageSize;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                InstallSize;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     SellText;                                         		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AssetId;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                PurchaseQuantity;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                PointsPrice;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     PriceText;                                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OfferIdText;                                      		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.AppIdLicenseInfo
// 0x0008
struct FAppIdLicenseInfo
{
	int                                                AppID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LicenseMask;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0058
struct FOnlineContent
{
	unsigned char                                      ContentType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      UserIndex;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsCorrupt : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DeviceID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LicenseMask;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Filename;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ContentPath;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ContentPackages;                                  		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ContentFiles;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAppIdLicenseInfo >                 CachedAppIdInfo;                                  		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContentNameInfo
// 0x0020
struct FOnlineContentNameInfo
{
	struct FString                                     ContentName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EngineVersion;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FGuid                                       CookedVersionID;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedOnlineContent
// 0x0021(0x0079 - 0x0058)
struct FNamedOnlineContent : FOnlineContent
{
	struct FOnlineContentNameInfo                      NameInfo;                                         		// 0x0058 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      NamedContentType;                                 		// 0x0078 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.CompatibilityOnlineContent
// 0x008C
struct FCompatibilityOnlineContent
{
	int                                                VersionNumber;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FNamedOnlineContent                         Container;                                        		// 0x0004 (0x007C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FNamedOnlineContent >               Content;                                          		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x004C
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0018) [0x0000000000000002]              ( CPF_Const )
	struct FQWord                                      SessionId;                                        		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     SessionInfo;                                      		// 0x0020 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x002C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     PresenceInfo;                                     		// 0x0038 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      FriendState;                                      		// 0x0044 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsOnline : 1;                                    		// 0x0048 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0048 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x0048 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bIsJoinable : 1;                                  		// 0x0048 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bHasVoiceSupport : 1;                             		// 0x0048 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bHaveInvited : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasInvitedYou : 1;                               		// 0x0048 (0x0004) [0x0000000000000002] [0x00000040] ( CPF_Const )
	unsigned long                                      bHaveRequested : 1;                               		// 0x0048 (0x0004) [0x0000000000000002] [0x00000080] ( CPF_Const )
	unsigned long                                      bHasRequestedYou : 1;                             		// 0x0048 (0x0004) [0x0000000000000002] [0x00000100] ( CPF_Const )
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004(0x005C - 0x0058)
struct FOnlineCrossTitleContent : FOnlineContent
{
	int                                                TitleId;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x001C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0018) [0x0000000000000000]              
	unsigned long                                      bIsFriend : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineAuthInterfaceBaseImpl.BaseAuthSession
// 0x0020
struct FBaseAuthSession
{
	int                                                EndPointIP;                                       		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                EndPointPort;                                     		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                EndPointUID;                                      		// 0x0008 (0x0018) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineAuthInterfaceBaseImpl.LocalAuthSession
// 0x0004(0x0024 - 0x0020)
struct FLocalAuthSession : FBaseAuthSession
{
	int                                                SessionUID;                                       		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.OnlineAuthInterfaceBaseImpl.AuthSession
// 0x0008(0x0028 - 0x0020)
struct FAuthSession : FBaseAuthSession
{
	unsigned char                                      AuthStatus;                                       		// 0x0020 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                AuthBlobUID;                                      		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.AccessControl.PendingClientAuth
// 0x0024
struct FPendingClientAuth
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                ClientUID;                                        		// 0x0004 (0x0018) [0x0000000000000000]              
	float                                              AuthTimestamp;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AuthRetryCount;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AccessControl.ServerAuthRetry
// 0x001C
struct FServerAuthRetry
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0018) [0x0000000000000000]              
	int                                                AuthRetryCount;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      Nothing : 1;                                      		// 0x0000 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      Pawn : 1;                                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      Vehicle : 1;                                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      Water : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	unsigned long                                      GameplayPhysics : 1;                              		// 0x0000 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      EffectPhysics : 1;                                		// 0x0000 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled1 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      Untitled2 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      TossedItems : 1;                                  		// 0x0000 (0x0004) [0x0000000000000003] [0x00000200] ( CPF_Edit | CPF_Const )
	unsigned long                                      TossedItemsPlayerVehicle : 1;                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00000400] ( CPF_Edit | CPF_Const )
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00000800] ( CPF_Edit | CPF_Const )
	unsigned long                                      FluidDrain : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00001000] ( CPF_Edit | CPF_Const )
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00002000] ( CPF_Edit | CPF_Const )
	unsigned long                                      FracturedMeshPart : 1;                            		// 0x0000 (0x0004) [0x0000000000000003] [0x00004000] ( CPF_Edit | CPF_Const )
	unsigned long                                      BlockingVolume : 1;                               		// 0x0000 (0x0004) [0x0000000000000003] [0x00008000] ( CPF_Edit | CPF_Const )
	unsigned long                                      DeadPawn : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00010000] ( CPF_Edit | CPF_Const )
	unsigned long                                      Clothing : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00020000] ( CPF_Edit | CPF_Const )
	unsigned long                                      ClothingCollision : 1;                            		// 0x0000 (0x0004) [0x0000000000000003] [0x00040000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TossedItemsEnemyVehicle : 1;                      		// 0x0000 (0x0004) [0x0000000000000003] [0x00080000] ( CPF_Edit | CPF_Const )
	unsigned long                                      PlayerVehicle : 1;                                		// 0x0000 (0x0004) [0x0000000000000003] [0x00100000] ( CPF_Edit | CPF_Const )
	unsigned long                                      EnemyVehicle : 1;                                 		// 0x0000 (0x0004) [0x0000000000000003] [0x00200000] ( CPF_Edit | CPF_Const )
	unsigned long                                      PlayerVehicleEnemyVehicle : 1;                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00400000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TossedItemsPlayerVehicleEnemyVehicle : 1;         		// 0x0000 (0x0004) [0x0000000000000003] [0x00800000] ( CPF_Edit | CPF_Const )
	unsigned long                                      WillowPickup : 1;                                 		// 0x0000 (0x0004) [0x0000000000000003] [0x01000000] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BSP : 1;                                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Static : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Dynamic : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      CompositeDynamic : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      Skybox : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      Unnamed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      Unnamed01 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      Unnamed02 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      Unnamed03 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      Unnamed04 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      Unnamed05 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      Cinematic : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      Cinematic01 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      Cinematic02 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      Cinematic03 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      Cinematic04 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      Cinematic05 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      Cinematic06 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      Cinematic07 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      Cinematic08 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
	unsigned long                                      Cinematic09 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00200000] ( CPF_Edit )
	unsigned long                                      Gameplay : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00400000] ( CPF_Edit )
	unsigned long                                      Gameplay01 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      Gameplay02 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
	unsigned long                                      Gameplay03 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x02000000] ( CPF_Edit )
	unsigned long                                      Crowd : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x04000000] ( CPF_Edit )
	unsigned long                                      PhysX : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x08000000] ( CPF_Edit )
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTranslucent : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDistortion : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOneLayerDistortionRelevance : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLit : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bUsesSceneColor : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.IInstanceData.ReplicatedInstanceDataState
// 0x0010
struct FReplicatedInstanceDataState
{
	int                                                SwitchStateBitField;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ActiveSwitchValues;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RemovedBodyCompositionPartsBitField;              		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedToApplyThisState : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IInstanceData.ComponentData
// 0x0020
struct FComponentData
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      CollisionType;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttachToMesh : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsUsable : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsSecondaryUsable : 1;                           		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       MeshSocketName;                                   		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBaseHitRegionDefinition*                    HitRegionDefinition;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UEngineInteractionIconDefinition*            InteractIcon;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UEngineInteractionIconDefinition*            SecondaryInteractIcon;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.IInstanceData.InstanceDataUnion
// 0x0058
struct FInstanceDataUnion
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Replication;                                      		// 0x0009 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaxSwitchValue;                                   		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      BitsRequiredForMaxSwitchValue;                    		// 0x000B (0x0001) [0x0000000000000000]              
	unsigned long                                      Bool : 1;                                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      DeleteByOwner : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                Int;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Float;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Vector;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	class UObject*                                     Object;                                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FComponentData                              ComponentData;                                    		// 0x0028 (0x0020) [0x0000000000080001]              ( CPF_Edit | CPF_Component )
	struct FString                                     String;                                           		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                BodyCompositionIndex;                             		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.IInstanceData.InstanceDataSet
// 0x000C
struct FInstanceDataSet
{
	TArray< struct FInstanceDataUnion >                Data;                                             		// 0x0000 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0008
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Destination;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x0012
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CompareValueId;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectPropertyName;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      ComparisonType;                                   		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x000C
struct FOnlineGameSearchORClause
{
	TArray< struct FOnlineGameSearchParameter >        OrParams;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectPropertyName;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      SortType;                                         		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0018
struct FOnlineGameSearchQuery
{
	TArray< struct FOnlineGameSearchORClause >         OrClauses;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineGameSearchSortClause >       SortClauses;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0028
struct FOverrideSkill
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDouble >                           Mus;                                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDouble >                           Sigmas;                                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0014
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ObjectPropertyValue;                              		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0008
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    PlatformData;                                     		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x002C
struct FTViewTarget
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 Controller;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTPOV                                       POV;                                              		// 0x0008 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	float                                              AspectRatio;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTPOV                                       POV;                                              		// 0x0004 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BlendFunction;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendExp;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLockOutgoing : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x001C
struct FLUTBlender
{
	TArray< class UTexture* >                          LUTTextures;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    LUTWeights;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasChanged : 1;                                  		// 0x0018 (0x0004) [0x0000000000003002] [0x00000001] ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x00E8
struct FPostProcessSettings
{
	unsigned long                                      bOverride_EnableBloom : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverride_EnableDOF : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverride_EnableMotionBlur : 1;                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverride_EnableSceneEffect : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverride_AllowAmbientOcclusion : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverride_OverrideRimShaderColor : 1;             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOverride_Bloom_Scale : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverride_Bloom_Threshold : 1;                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bOverride_Bloom_Tint : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bOverride_Bloom_ScreenBlendThreshold : 1;         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bOverride_Bloom_InterpolationDuration : 1;        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bOverride_DOF_FalloffExponent : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bOverride_DOF_BlurKernelSize : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bOverride_DOF_BlurBloomKernelSize : 1;            		// 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bOverride_DOF_MaxNearBlurAmount : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bOverride_DOF_MinBlurAmount : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bOverride_DOF_MaxFarBlurAmount : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bOverride_DOF_FocusType : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bOverride_DOF_FocusInnerRadius : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bOverride_DOF_FocusDistance : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bOverride_DOF_FocusPosition : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bOverride_DOF_TunnelVisionScale : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bOverride_DOF_TunnelVisionYOffset : 1;            		// 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bOverride_DOF_InterpolationDuration : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bOverride_DOF_BokehTexture : 1;                   		// 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bOverride_MotionBlur_MaxVelocity : 1;             		// 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bOverride_MotionBlur_Amount : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bOverride_MotionBlur_FullMotionBlur : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bOverride_MotionBlur_CameraRotationThreshold : 1; 		// 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bOverride_MotionBlur_CameraTranslationThreshold : 1;		// 0x0000 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bOverride_MotionBlur_InterpolationDuration : 1;   		// 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      bOverride_Scene_Desaturation : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      bOverride_Scene_Colorize : 1;                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverride_Scene_TonemapperScale : 1;              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverride_Scene_ImageGrainScale : 1;              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverride_Scene_HighLights : 1;                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverride_Scene_MidTones : 1;                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverride_Scene_Shadows : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOverride_Scene_InterpolationDuration : 1;        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverride_Scene_ColorGradingLUT : 1;              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bOverride_RimShader_Color : 1;                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bOverride_RimShader_InterpolationDuration : 1;    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bEnableBloom : 1;                                 		// 0x0004 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bEnableDOF : 1;                                   		// 0x0004 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bTwoLayerSimpleDepthOfField : 1;                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bEnableMotionBlur : 1;                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bEnableSceneEffect : 1;                           		// 0x0004 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0004 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bOverrideRimShaderColor : 1;                      		// 0x0004 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	float                                              Bloom_Scale;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Bloom_Threshold;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Bloom_Tint;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Bloom_ScreenBlendThreshold;                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Bloom_InterpolationDuration;                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_BlurBloomKernelSize;                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_FalloffExponent;                              		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_BlurKernelSize;                               		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_MaxNearBlurAmount;                            		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_MinBlurAmount;                                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_MaxFarBlurAmount;                             		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DOF_FocusType;                                    		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_FocusInnerRadius;                             		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_FocusDistance;                                		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DOF_FocusPosition;                                		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_TunnelVisionScale;                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_TunnelVisionYOffset;                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DOF_InterpolationDuration;                        		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  DOF_BokehTexture;                                 		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_MaxVelocity;                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_Amount;                                		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                    		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MotionBlur_CameraRotationThreshold;               		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_CameraTranslationThreshold;            		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotionBlur_InterpolationDuration;                 		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scene_Desaturation;                               		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_Colorize;                                   		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scene_TonemapperScale;                            		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scene_ImageGrainScale;                            		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_HighLights;                                 		// 0x008C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_MidTones;                                   		// 0x0098 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_Shadows;                                    		// 0x00A4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scene_InterpolationDuration;                      		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                RimShader_Color;                                  		// 0x00B4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimShader_InterpolationDuration;                  		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    ColorGrading_LookupTable;                         		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLUTBlender                                 ColorGradingLUT;                                  		// 0x00CC (0x001C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowDominantWholeSceneDynamicShadows : 1;       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAllowMotionBlurSkinning : 1;                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAllowTemporalAA : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAllowLightShafts : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x0008
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InputLinkIdx;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0024
struct FSeqOpOutputLink
{
	TArray< struct FSeqOpOutputInputLink >             Links;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkDesc;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasImpulse : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampedMax : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHidden : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsActivated : 1;                                 		// 0x0018 (0x0004) [0x0000000001002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bMoving : 1;                                      		// 0x0018 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	class USequenceOp*                                 LinkedOp;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ActivateDelay;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x003C
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class USequenceVariable* >                 LinkedVariables;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkDesc;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       LinkVar;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       PropertyName;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWriteable : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSequenceNeverReadsOnlyWritesToThisVar : 1;       		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifiesLinkedObject : 1;                        		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHidden : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bClampedMax : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bMoving : 1;                                      		// 0x002C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bAllowAnyType : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                MinVars;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxVars;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	class UProperty*                                   CachedProperty;                                   		// 0x0038 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x001C
struct FSeqEventLink
{
	TArray< class USequenceEvent* >                    LinkedEvents;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkDesc;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHidden : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMoving : 1;                                      		// 0x0018 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bClampedMax : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0048
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     SrcActorOffset;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     SrcActorDesiredOffset;                            		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FString                                     DebugText;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeRemaining;                                    		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Duration;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAbsoluteLocation : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKeepAttachedToActor : 1;                         		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     OrigActorLocation;                                		// 0x0038 (0x000C) [0x0000000000000000]              
	class UFont*                                       Font;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[ 0x2 ];                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x001C
struct FAnimBlendChild
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNode*                                   Anim;                                             		// 0x0008 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              Weight;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BlendWeight;                                      		// 0x0010 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bMirrorSkeleton : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsAdditive : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AdditiveWeightScale;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x0018
struct FSkelMeshComponentLODInfo
{
	TArray< unsigned long >                            HiddenMaterials;                                  		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bNeedsInstanceWeightUpdate : 1;                   		// 0x000C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bAlwaysUseInstanceWeights : 1;                    		// 0x000C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned char                                      InstanceWeightUsage;                              		// 0x0010 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                InstanceWeightIdx;                                		// 0x0014 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0030
struct FAttachment
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeLocation;                                 		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeScale;                                    		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x0008
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltLODModelFragment
// 0x000C
struct FGestaltLODModelFragment
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                FirstIndex;                                       		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                NumPrimitives;                                    		// 0x0008 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltLODModel
// 0x000C
struct FGestaltLODModel
{
	TArray< struct FGestaltLODModelFragment >          GestaltFragments;                                 		// 0x0000 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct Engine.SkeletalMeshComponent.SocketRemapEntry
// 0x0010
struct FSocketRemapEntry
{
	struct FName                                       OriginalSocketName;                               		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       MangledSocketName;                                		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltAccessoryEntry
// 0x000C
struct FGestaltAccessoryEntry
{
	int                                                TransformIndex;                                   		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                OriginalBoneIndex;                                		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                GPUBoneIndex;                                     		// 0x0008 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltDataContainer
// 0x0048
struct FGestaltDataContainer
{
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< struct FGestaltLODModel >                  LODModelData;                                     		// 0x0004 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FSocketRemapEntry >                 SocketMappings;                                   		// 0x0010 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FGestaltAccessoryEntry >            GestaltAccessoryList;                             		// 0x001C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	class UGestaltPartMatrices*                        GestaltPartMatricesContainer;                     		// 0x0028 (0x0004) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	struct FBoxSphereBounds                            ReferencePoseBounds;                              		// 0x002C (0x001C) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0020
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0018) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bLostConnectionToHost : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0031
struct FClientAdjustment
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      newPhysics;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     NewVel;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	class AActor*                                      NewBase;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     NewFloor;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	unsigned char                                      bAckGoodMove;                                     		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0034
struct FKismetDrawTextInfo
{
	struct FString                                     MessageText;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AppendedText;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UFont*                                       MessageFont;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   MessageFontScale;                                 		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   MessageOffset;                                    		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      MessageColor;                                     		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MessageEndTime;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0018
struct FConsoleMessage
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      TextColor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MessageLife;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumMapListCyclesDone;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeDelta;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x003C
struct FInputMatchRequest
{
	TArray< struct FInputEntry >                       Inputs;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      MatchActor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       MatchFuncName;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             MatchDelegate;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       FailedFuncName;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       RequestName;                                      		// 0x002C (0x0008) [0x0000000000000000]              
	int                                                MatchIdx;                                         		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastMatchTime;                                    		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0031
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                      		// 0x0000 (0x001C) [0x0000000000000000]              
	struct FVector                                     BoxCenter;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FPointer                                    OctreeNode;                                       		// 0x0028 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UObject*                                     Owner;                                            		// 0x002C (0x0004) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned char                                      OwnerType;                                        		// 0x0030 (0x0001) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlocked : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.NavigationPoint.AreaTestSortedPoint
// 0x0008
struct FAreaTestSortedPoint
{
	class ANavigationPoint*                            Nav;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DistSq;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Pylon.NavMeshPathSize
// 0x0010
struct FNavMeshPathSize
{
	float                                              Size;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      PolyColor;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ObstacleColor;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x001C
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                      		// 0x0000 (0x0014) [0x0000000000000000]              
	int                                                PolyId;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CachedPoly;                                       		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.AkComponent.PendingSubtitleInfo
// 0x001C
struct FPendingSubtitleInfo
{
	struct FPointer                                    PendingSubtitlePlayingInfoPtr;                    		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     OriginalFileName;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            StreamedSubtitleData;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AkComponent.PendingFaceFXInfo
// 0x001C
struct FPendingFaceFXInfo
{
	struct FPointer                                    PendingFaceFXPlayingInfoPtr;                      		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     AnimName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            RawData;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AkDialogueEvent.DialogueArgument
// 0x0001
struct FDialogueArgument
{
	unsigned char                                      Source;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Radius;                                           		// 0x0040 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              X;                                                		// 0x0040 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Y;                                                		// 0x0044 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Z;                                                		// 0x0048 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bNoRBCollision : 1;                               		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPerPolyShape : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Radius;                                           		// 0x0040 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Length;                                           		// 0x0044 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x0064
struct FKConvexElem
{
	TArray< struct FVector >                           VertexData;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlane >                            PermutedVertexData;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      FaceTriData;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           EdgeDirections;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           FaceNormalDirections;                             		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlane >                            FacePlaneData;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBox                                        ElemBox;                                          		// 0x0048 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x0038
struct FKAggregateGeom
{
	TArray< struct FKSphereElem >                      SphereElems;                                      		// 0x0000 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< struct FKBoxElem >                         BoxElems;                                         		// 0x000C (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< struct FKSphylElem >                       SphylElems;                                       		// 0x0018 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< struct FKConvexElem >                      ConvexElems;                                      		// 0x0024 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	struct FPointer                                    RenderInfo;                                       		// 0x0030 (0x0004) [0x0000000001001000]              ( CPF_Native )
	unsigned long                                      bSkipCloseAndParallelChecks : 1;                  		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x000C
struct FKCachedConvexData_Mirror
{
	TArray< int >                                      CachedConvexElements;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SelectionIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned long                                      bIsWorldInfo : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExteriorVolume;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExteriorTime;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExteriorLPF;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExteriorLPFTime;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorVolume;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorTime;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorLPF;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteriorLPFTime;                                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x001C
struct FReverbSettings
{
	unsigned long                                      bApplyReverb : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      ReverbType;                                       		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Volume;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeTime;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReflectionsDelayOverride;                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LateDelayOverride;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecayHighFrequencyRatioOverride;                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0010
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FloatParam;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundNodeWave*                              WaveParam;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.EngineBaseTypes.SubtitleCue
// 0x0010
struct FSubtitleCue
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000008003]              ( CPF_Edit | CPF_Const | CPF_Localized )
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0030
struct FCompressedTrack
{
	TArray< unsigned char >                            ByteStream;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Times;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Mins[ 0x3 ];                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              Ranges[ 0x3 ];                                    		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.DeltaTrackInfo
// 0x0048
struct FDeltaTrackInfo
{
	struct FQuat                                       RotKey[ 0x2 ];                                    		// 0x0000 (0x0020) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FVector                                     PosKey[ 0x2 ];                                    		// 0x0020 (0x0018) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                RotKeyIndex[ 0x2 ];                               		// 0x0038 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                PosKeyIndex[ 0x2 ];                               		// 0x0040 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0014
struct FCurveTrack
{
	struct FName                                       CurveName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< float >                                    CurveWeights;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0018
struct FRotationTrack
{
	TArray< struct FQuat >                             RotKeys;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Times;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0018
struct FTranslationTrack
{
	TArray< struct FVector >                           PosKeys;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Times;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetStrength;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0014
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTimeModifier >                     Modifiers;                                        		// 0x0008 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x000C
struct FAnimNotifyEvent
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNotify*                                 Notify;                                           		// 0x0004 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0018
struct FRawAnimSequenceTrack
{
	TArray< struct FVector >                           PosKeys;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQuat >                             RotKeys;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0018
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlendBase*                          CachedNode;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               CachedSlotNode;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeightCheck;                                      		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChildIndex;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0030
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                        		// 0x0000 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FWeightNodeRule                             SecondNode;                                       		// 0x0018 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerBoneWeightIncrease;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0040
struct FPerBoneMaskInfo
{
	TArray< struct FBranchInfo >                       BranchList;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesiredWeight;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeightRule >                       WeightRuleList;                                   		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bWeightBasedOnNodeRules : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPendingBlend : 1;                                		// 0x0020 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	TArray< float >                                    PerBoneWeights;                                   		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            TransformReqBone;                                 		// 0x0030 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                TransformReqBoneIndex;                            		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                       		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0008 (0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                               		// 0x0010 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               LC;                                               		// 0x0030 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               LD;                                               		// 0x0050 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               CU;                                               		// 0x0070 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               CC;                                               		// 0x0090 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               CD;                                               		// 0x00B0 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               RU;                                               		// 0x00D0 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               RC;                                               		// 0x00F0 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FAimTransform                               RD;                                               		// 0x0110 (0x0020) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x007C
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector2D                                   HorizontalRange;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   VerticalRange;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAimComponent >                     AimComponents;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBoneAtom >                         AimTransformsCache;                               		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDirtyAimTransformsCache : 1;                     		// 0x0030 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FName                                       AnimName_LU;                                      		// 0x0034 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_LC;                                      		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_LD;                                      		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_CU;                                      		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_CC;                                      		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_CD;                                      		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_RU;                                      		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_RC;                                      		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName_RD;                                      		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0030
struct FChildBoneBlendInfo
{
	TArray< float >                                    TargetPerBoneWeight;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       InitTargetStartBone;                              		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitPerBoneIncrease;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       OldStartBone;                                     		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              OldBoneIncrease;                                  		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< unsigned char >                            TargetRequiredBones;                              		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMin;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMax;                                     		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   PlayRateRange;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStillFrame : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LoopCount;                                        		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPosition;                                     		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0010
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                      		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAnimSequence*                               AnimSeq;                                          		// 0x0008 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                AnimLinkupIndex;                                  		// 0x000C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x001C
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAnimInfo                                   AnimInfo;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0020
struct FSynchGroup
{
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimNodeSequence*                           MasterNode;                                       		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       GroupName;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFireSlaveNotifies : 1;                           		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RateScale;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.PawnAllegiance.OpinionData
// 0x0008
struct FOpinionData
{
	unsigned char                                      Opinion;                                          		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPawnAllegiance*                             Allegiance;                                       		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.ITargetable.InfoBarData
// 0x000C
struct FInfoBarData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFullyArmored : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x001C
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSubtitleCue >                      Subtitles;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bMature : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bManualWordWrap : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSingleLine : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0004
struct FLightMapRef
{
	struct FPointer                                    Reference;                                        		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                     		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FMatrix                                     LightToWorld;                                     		// 0x0040 (0x0040) [0x0000000000000000]              
	struct FBox                                        LightSpaceImportanceBounds;                       		// 0x0080 (0x001C) [0x0000000000000000]              
	int                                                ShadowMapSizeX;                                   		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                ShadowMapSizeY;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IndirectLightingSaturation;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShadowExponent;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WarmupTime;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004(0x0010 - 0x000C)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
	float                                              LightSourceRadius;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004(0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float                                              LightSourceAngle;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	unsigned long                                      bUseTwoSidedLighting : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShadowIndirectOnly : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseEmissiveForStaticLighting : 1;                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bGenerateVolumeLightingSamples : 1;               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              EmissiveLightFalloffExponent;                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EmissiveLightExplicitInfluenceRadius;             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EmissiveBoost;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DiffuseBoost;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpecularBoost;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FullyOccludedSamplesFraction;                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	unsigned long                                      bDebugMode : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStatsEnabled : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bGatherBSPSurfacesAcrossComponents : 1;           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              CoplanarTolerance;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseDeterministicLighting : 1;                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseImmediateImport : 1;                          		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bImmediateProcessMappings : 1;                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSortMappings : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bDumpBinaryFiles : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDebugMaterials : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bPadMappings : 1;                                 		// 0x0008 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDebugPaddings : 1;                               		// 0x0008 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bOnlyCalcDebugTexelMappings : 1;                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bUseRandomColors : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bColorBordersGreen : 1;                           		// 0x0008 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bColorByExecutionTime : 1;                        		// 0x0008 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	float                                              ExecutionTimeDivisor;                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInitialized : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned long                                      bDistributionEnabled : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceContentExport : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x001C
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          Curve;                                            		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxCurveTime;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.DamageTypeDefinition.RecentDamageTracker
// 0x000C
struct FRecentDamageTracker
{
	float                                              TotalDamage;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              HealthDamage;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ShieldDamage;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Pawn.BalanceDefSpawnedActorState
// 0x000C
struct FBalanceDefSpawnedActorState
{
	class UBaseBalanceDefinition*                      BalanceDefinition;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GradeIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGradeCustomizationsApplied : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                                  		// 0x0004 (0x0018) [0x0000000000000000]              
	struct FTrailSocketSamplePoint                     ControlPointSample;                               		// 0x001C (0x0018) [0x0000000000000000]              
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                                 		// 0x0034 (0x0018) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     FirstEdgeSample;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     ControlPointSample;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     SecondEdgeSample;                                 		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x000C
struct FAnimSetMeshLinkup
{
	TArray< int >                                      BoneToTrackTable;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0024
struct FAnimGroup
{
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0000 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UAnimNodeSequence*                           SynchMaster;                                      		// 0x000C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAnimNodeSequence*                           NotifyMaster;                                     		// 0x0010 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       GroupName;                                        		// 0x0014 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RateScale;                                        		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SynchPctPosition;                                 		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x000C
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkelControlBase*                            ControlHead;                                      		// 0x0008 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0018
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               PreviewSkelMesh;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMorphTargetSet* >                   PreviewMorphSets;                                 		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0018
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               PreviewSkelMesh;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 PreviewStaticMesh;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0014
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          PreviewAnimSets;                                  		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ApexDestructibleActor._ModifyHealthParams
// 0x0030
struct F_ModifyHealthParams
{
	unsigned long                                      bHeal : 1;                                        		// 0x0000 (0x0004) [0x0000000000100000] [0x00000001] 
	float                                              DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000100000]              
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000100000]              
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000100000]              
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000100000]              
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000100000]              
	class UDamageTypeDefinition*                       DamageTypeDefinition;                             		// 0x0028 (0x0004) [0x0000000000100000]              
	class UImpactDefinition*                           ImpactDefinition;                                 		// 0x002C (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	unsigned long                                      ACCUMULATE_DAMAGE : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ASSET_DEFINED_SUPPORT : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      WORLD_SUPPORT : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      DEBRIS_TIMEOUT : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      DEBRIS_MAX_SEPARATION : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      CRUMBLE_SMALLEST_CHUNKS : 1;                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      ACCURATE_RAYCASTS : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      USE_VALID_BOUNDS : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0004
struct FNxDestructibleDepthParameters
{
	unsigned long                                      TAKE_IMPACT_DAMAGE : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IGNORE_POSE_UPDATES : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IGNORE_RAYCAST_CALLBACKS : 1;                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      IGNORE_CONTACT_CALLBACKS : 1;                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      USER_FLAG : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      USER_FLAG01 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      USER_FLAG02 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      USER_FLAG03 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x0080
struct FNxDestructibleParameters
{
	float                                              DamageThreshold;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageToRadius;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageCap;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceToDamage;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactVelocityThreshold;                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaterialStrength;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageToPercentDeformation;                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeformationPercentLimit;                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFormExtendedStructures : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                SupportDepth;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DebrisDepth;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EssentialDepth;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DebrisLifetimeMin;                                		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DebrisLifetimeMax;                                		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DebrisMaxSeparationMin;                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DebrisMaxSeparationMax;                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FBox                                        ValidBounds;                                      		// 0x0040 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxChunkSpeed;                                    		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassScaleExponent;                                		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FNxDestructibleParametersFlag               Flags;                                            		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrbVolumeLimit;                                   		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrbParticleSpacing;                               		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FractureImpulseScale;                             		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FNxDestructibleDepthParameters >    DepthParameters;                                  		// 0x0074 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	unsigned char                                      OverrideMode;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FDamageParameters                           Params;                                           		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AttributeDefinitionBase.AttributePriorityData
// 0x0008
struct FAttributePriorityData
{
	class UAttributeDefinition*                        Attribute;                                        		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PriorityIncrease;                                 		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeEffect.AppliedAttributeEffect
// 0x000C
struct FAppliedAttributeEffect
{
	class UObject*                                     Context;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAttributeDefinition*                        Attribute;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAttributeModifier*                          Modifier;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AttributeInitializationDefinition.AttributeInitializationData
// 0x0010
struct FAttributeInitializationData
{
	float                                              BaseValueConstant;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAttributeDefinition*                        BaseValueAttribute;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAttributeInitializationDefinition*          InitializationDefinition;                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseValueScaleConstant;                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.AttributeEffect.AttributeEffectData
// 0x0018
struct FAttributeEffectData
{
	class UAttributeDefinition*                        AttributeToModify;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ModifierType;                                     		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                BaseModifierValue;                                		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeExpression.AttributeExpressionData
// 0x0010
struct FAttributeExpressionData
{
	class UAttributeDefinition*                        AttributeOperand1;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ComparisonOperator;                               		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      Operand2Usage;                                    		// 0x0005 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAttributeDefinition*                        AttributeOperand2;                                		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ConstantOperand2;                                 		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeExpression.ConditionalSoundData
// 0x0014
struct FConditionalSoundData
{
	class UAkEvent*                                    Event;                                            		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   Cue;                                              		// 0x0004 (0x0004) [0x0000000020000003]              ( CPF_Edit | CPF_Const | CPF_Deprecated )
	TArray< struct FAttributeExpressionData >          Expressions;                                      		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.AttributeInitializationDefinition.BalanceFormula
// 0x0044
struct FBalanceFormula
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                Multiplier;                                       		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                Level;                                            		// 0x0014 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                Power;                                            		// 0x0024 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                Offset;                                           		// 0x0034 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeInitializationDefinition.Variance
// 0x0024
struct FVariance
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bUseIntegerRandomization : 1;                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                LowerBound;                                       		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                UpperBound;                                       		// 0x0014 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeInitializationDefinition.Range
// 0x0028
struct FRange
{
	unsigned long                                      bEnableMinValueRestriction : 1;                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MinValue;                                         		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bEnableMaxValueRestriction : 1;                   		// 0x0014 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MaxValue;                                         		// 0x0018 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeInitializationDefinition.ConditionalValueExpression
// 0x001C
struct FConditionalValueExpression
{
	struct FAttributeInitializationData                BaseValueIfTrue;                                  		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FAttributeExpressionData >          Expressions;                                      		// 0x0010 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.AttributeInitializationDefinition.ConditionalInitializationExpressions
// 0x0020
struct FConditionalInitializationExpressions
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< struct FConditionalValueExpression >       ConditionalExpressionList;                        		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FAttributeInitializationData                DefaultBaseValue;                                 		// 0x0010 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AttributeInitializationDefinition.AttributeBaseValueData
// 0x0014
struct FAttributeBaseValueData
{
	class UAttributeDefinition*                        Attribute;                                        		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                BaseValue;                                        		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0034
struct FListener
{
	class APortalVolume*                               PortalVolume;                                     		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Up;                                               		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Right;                                            		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Front;                                            		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x0010
struct FAudioClassInfo
{
	int                                                NumResident;                                      		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SizeResident;                                     		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumRealTime;                                      		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SizeRealTime;                                     		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.BaseBalanceDefinition.GameStageRangeData
// 0x0008
struct FGameStageRangeData
{
	int                                                MinGameStage;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaxGameStage;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.BaseBalanceDefinition.GameStageGradeWeightData
// 0x0028
struct FGameStageGradeWeightData
{
	struct FGameStageRangeData                         GameStageRequirement;                             		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MinSpawnProbabilityModifier;                      		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MaxSpawnProbabilityModifier;                      		// 0x0018 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.BehaviorBase.BehaviorContextData
// 0x000E
struct FBehaviorContextData
{
	struct FName                                       InstancedDataContextName;                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ContextObject;                                    		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      BehaviorContext;                                  		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bSupportsDefaultOutputLink;                       		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.BehaviorBase.BehaviorParameterUnion
// 0x0074
struct FBehaviorParameterUnion
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     VectorData;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	class AActor*                                      ActorData;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FImpactInfo                                 ImpactInfoData;                                   		// 0x0018 (0x005C) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct Engine.BehaviorBase.BehaviorParameters
// 0x000C
struct FBehaviorParameters
{
	TArray< struct FBehaviorParameterUnion >           Parameters;                                       		// 0x0000 (0x000C) [0x0000000000580000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct Engine.BehaviorBase.BehaviorOutputLinkDescriptionData
// 0x0004
struct FBehaviorOutputLinkDescriptionData
{
	int                                                LinkId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.BehaviorBase.BehaviorKernelInfo
// 0x001C
struct FBehaviorKernelInfo
{
	struct FPointer                                    StateForThreadRunningThisBehavior;                		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              WorldTime;                                        		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ExecutionTime;                                    		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              WorldDeltaTime;                                   		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ExecutionDelayError;                              		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NextExecutionDelayTime;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasLinkedOutputs : 1;                            		// 0x0018 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsInitialRunOfThisBehavior : 1;                  		// 0x0018 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
};

// ScriptStruct Engine.ICounterBehavior.CounterEventReactionData
// 0x0010
struct FCounterEventReactionData
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0004 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct Engine.ICounterBehavior.BehaviorCounterState
// 0x0008
struct FBehaviorCounterState
{
	int                                                CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ICounterBehavior.CounterBehaviorUserState
// 0x0010
struct FCounterBehaviorUserState
{
	struct FBehaviorCounterState                       Counters[ 0x2 ];                                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Behavior_RandomlyRunBehaviors.IndependentSelectionData
// 0x001C
struct FIndependentSelectionData
{
	struct FAttributeInitializationData                Probability;                                      		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0010 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct Engine.IMaterialBehavior.ScalarMaterialParameter
// 0x001C
struct FScalarMaterialParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                ValueFromAttribute;                               		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.IMaterialBehavior.VectorMaterialParameter
// 0x0028
struct FVectorMaterialParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Value;                                            		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                VectorScale;                                      		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.IMaterialBehavior.TextureMaterialParameter
// 0x000C
struct FTextureMaterialParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.ScalarParticleSystemParameter
// 0x0018
struct FScalarParticleSystemParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                Value;                                            		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.VectorParticleSystemParameter
// 0x0024
struct FVectorParticleSystemParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                VectorScale;                                      		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.ColorParticleSystemParameter
// 0x000C
struct FColorParticleSystemParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.MaterialParticleSystemParameter
// 0x000C
struct FMaterialParticleSystemParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.ActorParticleSystemParameter
// 0x0018
struct FActorParticleSystemParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FBehaviorContextData                        Context;                                          		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0020
struct FStaticMeshComponentLODInfo
{
	TArray< class UShadowMap2D* >                      ShadowMaps;                                       		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UObject* >                           ShadowVertexBuffers;                              		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FPointer                                    LightMap;                                         		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    OverrideVertexColors;                             		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FPackedNormal                               Normal;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Frequency;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InitialOffset;                                    		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FFOscillator                                Y;                                                		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FFOscillator                                Z;                                                		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                            		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FFOscillator                                Yaw;                                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FFOscillator                                Roll;                                             		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x0090
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SourceShakeName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              OscillatorTimeRemaining;                          		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlendingIn : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendInTime;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlendingOut : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendOutTime;                              		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector                                     LocSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotSinOffset;                                     		// 0x002C (0x000C) [0x0000000000000000]              
	float                                              FOVSinOffset;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	class UCameraAnimInst*                             AnimInst;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned char                                      PlaySpace;                                        		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xB ];                             		// 0x0045 (0x000B) MISSED OFFSET
	struct FMatrix                                     UserPlaySpaceMatrix;                              		// 0x0050 (0x0040) [0x0000000000000000]              
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	unsigned long                                      TEXTUREGROUP_World : 1;                           		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_WorldNormalMap : 1;                  		// 0x0000 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_WorldSpecular : 1;                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Character : 1;                       		// 0x0000 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_CharacterNormalMap : 1;              		// 0x0000 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_CharacterSpecular : 1;               		// 0x0000 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Weapon : 1;                          		// 0x0000 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_WeaponNormalMap : 1;                 		// 0x0000 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_WeaponSpecular : 1;                  		// 0x0000 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Vehicle : 1;                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000200] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_VehicleNormalMap : 1;                		// 0x0000 (0x0004) [0x0000000000000003] [0x00000400] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_VehicleSpecular : 1;                 		// 0x0000 (0x0004) [0x0000000000000003] [0x00000800] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Cinematic : 1;                       		// 0x0000 (0x0004) [0x0000000000000003] [0x00001000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Effects : 1;                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00002000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_EffectsNotFiltered : 1;              		// 0x0000 (0x0004) [0x0000000000000003] [0x00004000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Skybox : 1;                          		// 0x0000 (0x0004) [0x0000000000000003] [0x00008000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_UI : 1;                              		// 0x0000 (0x0004) [0x0000000000000003] [0x00010000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Lightmap : 1;                        		// 0x0000 (0x0004) [0x0000000000000003] [0x00020000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_RenderTarget : 1;                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00040000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_MobileFlattened : 1;                 		// 0x0000 (0x0004) [0x0000000000000003] [0x00080000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_ProcBuilding_Face : 1;               		// 0x0000 (0x0004) [0x0000000000000003] [0x00100000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_ProcBuilding_LightMap : 1;           		// 0x0000 (0x0004) [0x0000000000000003] [0x00200000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Shadowmap : 1;                       		// 0x0000 (0x0004) [0x0000000000000003] [0x00400000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_ColorLookupTable : 1;                		// 0x0000 (0x0004) [0x0000000000000003] [0x00800000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Terrain_Heightmap : 1;               		// 0x0000 (0x0004) [0x0000000000000003] [0x01000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Terrain_Weightmap : 1;               		// 0x0000 (0x0004) [0x0000000000000003] [0x02000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_ImageBasedReflection : 1;            		// 0x0000 (0x0004) [0x0000000000000003] [0x04000000] ( CPF_Edit | CPF_Const )
	unsigned long                                      TEXTUREGROUP_Bokeh : 1;                           		// 0x0000 (0x0004) [0x0000000000000003] [0x08000000] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x003C
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                             		// 0x0000 (0x0034) [0x0000000000001000]              ( CPF_Native )
	int                                                SizeX;                                            		// 0x0034 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                SizeY;                                            		// 0x0038 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x000C
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Next;                                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    PrevLink;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0014
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              U;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              V;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UL;                                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VL;                                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned long                                      bEnableGlow : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   GlowOuterRadius;                                  		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   GlowInnerRadius;                                  		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned long                                      bClipText : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableShadow : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                         		// 0x0004 (0x0024) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   V0_UV;                                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   V1_Pos;                                           		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   V1_UV;                                            		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   V2_Pos;                                           		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   V2_UV;                                            		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                            		// 0x0000 (0x0004) [0x0000000000100000]              
	float                                              DrawY;                                            		// 0x0004 (0x0004) [0x0000000000100000]              
	float                                              DrawXL;                                           		// 0x0008 (0x0004) [0x0000000000100000]              
	float                                              DrawYL;                                           		// 0x000C (0x0004) [0x0000000000100000]              
	struct FVector2D                                   Scaling;                                          		// 0x0010 (0x0008) [0x0000000000100000]              
	class UFont*                                       DrawFont;                                         		// 0x0018 (0x0004) [0x0000000000100000]              
	struct FVector2D                                   SpacingAdjust;                                    		// 0x001C (0x0008) [0x0000000000100000]              
	float                                              ViewportHeight;                                   		// 0x0024 (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0014
struct FWrappedStringElement
{
	struct FString                                     Value;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   LineExtent;                                       		// 0x000C (0x0008) [0x0000000000100000]              
};

// ScriptStruct Engine.CharacterClassDefinition.DamageTypeResistance
// 0x0020
struct FDamageTypeResistance
{
	struct FAttributeInitializationData                ResistanceToImpact;                               		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                ResistanceToStatusEffect;                         		// 0x0010 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NudgeValue;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIntRange : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIRoot.UIProviderScriptFieldValue
// 0x0064
struct FUIProviderScriptFieldValue
{
	struct FName                                       PropertyTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      PropertyType;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     StringValue;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    ImageValue;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ArrayValue;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUIRangeData                                RangeValue;                                       		// 0x0028 (0x0014) [0x0000000000000000]              
	struct FUniqueNetId                                NetIdValue;                                       		// 0x003C (0x0018) [0x0000000000000000]              
	struct FTextureCoordinates                         AtlasCoordinates;                                 		// 0x0054 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIProviderFieldValue
// 0x0004(0x0068 - 0x0064)
struct FUIProviderFieldValue : FUIProviderScriptFieldValue
{
	struct FPointer                                    CustomStringNode;                                 		// 0x0064 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0024
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InputKeyState;                                    		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSeqOpOutputInputLink >             TriggeredOps;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USequenceOp* >                       ActionsToExecute;                                 		// 0x0018 (0x000C) [0x0000000020400000]              ( CPF_NeedCtorLink | CPF_Deprecated )
};

// ScriptStruct Engine.UIRoot.UIDataStoreBinding
// 0x0030
struct FUIDataStoreBinding
{
	class UUIDataStoreSubscriber*                      Subscriber;                                       		// 0x0000 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      RequiredFieldType;                                		// 0x0008 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FString                                     MarkupString;                                     		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x0018 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       DataStoreName;                                    		// 0x001C (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       DataStoreField;                                   		// 0x0024 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUIDataStore*                                ResolvedDataStore;                                		// 0x002C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	int                                                ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	struct FName                                       InputKeyName;                                     		// 0x0008 (0x0008) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      EventType;                                        		// 0x0010 (0x0001) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	float                                              InputDelta;                                       		// 0x0014 (0x0004) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	float                                              DeltaTime;                                        		// 0x0018 (0x0004) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bAltPressed : 1;                                  		// 0x001C (0x0004) [0x0000000000102002] [0x00000001] ( CPF_Const | CPF_Transient )
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x001C (0x0004) [0x0000000000102002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      bShiftPressed : 1;                                		// 0x001C (0x0004) [0x0000000000102002] [0x00000004] ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008(0x0028 - 0x0020)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	struct FName                                       InputAliasName;                                   		// 0x0020 (0x0008) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AdjacentAxisInputKey;                             		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEmulateButtonPress : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       InputKeyToEmulate[ 0x2 ];                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ModifierKeyFlags;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0018
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x001C
struct FAutoCompleteNode
{
	int                                                IndexChar;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      AutoCompleteListIndices;                          		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPointer >                          ChildNodes;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0034
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LtSlotIdx;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RtSlotIdx;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LtToRtPct;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Tangent;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	unsigned char                                      SrcType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SrcAction;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      DestType;                                         		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      DestAction;                                       		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0014
struct FFireLink
{
	TArray< unsigned char >                            Interactions;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PackedProperties_CoverPairRefAndDynamicInfo;      		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bFallbackLink : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDynamicIndexInited : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastSrcLocation;                                  		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004(0x0018 - 0x0014)
struct FCoverReference : FActorReference
{
	int                                                SlotIdx;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x0019
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                      		// 0x0000 (0x0018) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned char                                      ExposedScale;                                     		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0054
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                             		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FBasedPosition                              Dest;                                             		// 0x001C (0x0034) [0x0000000000000001]              ( CPF_Edit )
	int                                                Direction;                                        		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x0008
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                SlotIdx;                                          		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0074
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SlotValidAfterTime;                               		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ForceCoverType;                                   		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverType;                                        		// 0x0009 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned char                                      LocationDescription;                              		// 0x000A (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationOffset;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotationOffset;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            Actions;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFireLink >                         FireLinks;                                        		// 0x0030 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FFireLink >                         RejectedFireLinks;                                		// 0x003C (0x000C) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	TArray< int >                                      ExposedCoverPackedProperties;                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TurnTargetPackedProperties;                       		// 0x0054 (0x0004) [0x0000000000000000]              
	TArray< struct FSlotMoveRef >                      SlipRefs;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCoverInfo >                        OverlapClaimsList;                                		// 0x0064 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      bLeanLeft : 1;                                    		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLeanRight : 1;                                   		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bForceCanPopUp : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCanPopUp : 1;                                    		// 0x0070 (0x0004) [0x0000000000020001] [0x00000008] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bCanMantle : 1;                                   		// 0x0070 (0x0004) [0x0000000000020001] [0x00000010] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bCanClimbUp : 1;                                  		// 0x0070 (0x0004) [0x0000000000020001] [0x00000020] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bForceCanCoverSlip_Left : 1;                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bForceCanCoverSlip_Right : 1;                     		// 0x0070 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bCanCoverSlip_Left : 1;                           		// 0x0070 (0x0004) [0x0000000000020001] [0x00000100] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bCanCoverSlip_Right : 1;                          		// 0x0070 (0x0004) [0x0000000000020001] [0x00000200] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bCanSwatTurn_Left : 1;                            		// 0x0070 (0x0004) [0x0000000000020001] [0x00000400] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bCanSwatTurn_Right : 1;                           		// 0x0070 (0x0004) [0x0000000000020001] [0x00000800] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bEnabled : 1;                                     		// 0x0070 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bAllowPopup : 1;                                  		// 0x0070 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bAllowMantle : 1;                                 		// 0x0070 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      bAllowCoverSlip : 1;                              		// 0x0070 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bAllowClimbUp : 1;                                		// 0x0070 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      bAllowSwatTurn : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      bForceNoGroundAdjust : 1;                         		// 0x0070 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      bPlayerOnly : 1;                                  		// 0x0070 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      bPreferLeanOverPopup : 1;                         		// 0x0070 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
	unsigned long                                      bDestructible : 1;                                		// 0x0070 (0x0004) [0x0000000000002000] [0x00200000] ( CPF_Transient )
	unsigned long                                      bSelected : 1;                                    		// 0x0070 (0x0004) [0x0000000000002000] [0x00400000] ( CPF_Transient )
	unsigned long                                      bFailedToFindSurface : 1;                         		// 0x0070 (0x0004) [0x0000000000022001] [0x00800000] ( CPF_Edit | CPF_Transient | CPF_EditConst )
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0034
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 LeanLeft;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 LeanRight;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 LeanLeftPref;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 LeanRightPref;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 Climb;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 Mantle;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SlipLeft;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SlipRight;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SwatLeft;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 SwatRight;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 PopUp;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 PlayerOnly;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualCoverType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0034
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsEnabled;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            SlotsDisabled;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            SlotsAdjusted;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FManualCoverTypeInfo >              SlotsCoverTypeChanged;                            		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CullDistance;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              KeyOut;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      TangentsValid : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TangentOut;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      IntepMode;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.DamageAdjuster.DamageInfo
// 0x001C
struct FDamageInfo
{
	class AController*                                 Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UDamageTypeDefinition*                       DamageTypeDefinition;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	class UImpactDefinition*                           ImpactDefinition;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.DamagePipeline.ReflectionInfo
// 0x0018
struct FReflectionInfo
{
	unsigned char                                      ReflectionType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              ReflectedDamageScale;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ReflectedDamageToReflector;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReflectTowardAttacker : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ReflectedInaccuracyModifier;                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReflectProjectiles : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.DamagePipeline.DamageEventSummary
// 0x0078
struct FDamageEventSummary
{
	float                                              InitialDamage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AIDamageScaleReduction;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DamageSourceReduction;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              InstigatorDamageTypeReduction;                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ExpLevelDifferenceReduction;                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RecipientDamageTypeReduction;                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              HitRegionReduction;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ShieldReduction;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              IntrinsicArmorReduction;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DamageSurfaceReduction;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              HitRegionCapReduction;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              ProtectionTimerReduction;                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              ProjectileReflectionReduction;                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              DamageSeverityPercent;                            		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              DamageDealtToShields;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              ExtraDamageDealtDueToAmplify;                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              FinalDamage;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              PreviousHealth;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	class UBaseHitRegionDefinition*                    HitRegion;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasCrit : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWasInjured : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasMaxShield : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasMaxHealth : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bWasOneShotKill : 1;                              		// 0x004C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FReflectionInfo                             ReflectionData;                                   		// 0x0050 (0x0018) [0x0000000000000000]              
	unsigned char                                      DamageTakenSkillEventsTriggered[ 0x8 ];           		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned char                                      DamageDealtSkillEventsTriggered[ 0x8 ];           		// 0x0070 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0010
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000102002]              ( CPF_Const | CPF_Transient )
	TArray< class UUIDataStore* >                      DataStores;                                       		// 0x0004 (0x000C) [0x0000000000502002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Input.KeyBind
// 0x0018
struct FKeyBind
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      Control : 1;                                      		// 0x0014 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      Shift : 1;                                        		// 0x0014 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      Alt : 1;                                          		// 0x0014 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      LeftTrigger : 1;                                  		// 0x0014 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      RightTrigger : 1;                                 		// 0x0014 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bIgnoreCtrl : 1;                                  		// 0x0014 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bIgnoreShift : 1;                                 		// 0x0014 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      bIgnoreAlt : 1;                                   		// 0x0014 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0008
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FPointer                                    RenderData;                                       		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x0008
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LifetimeRemaining;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x0008
struct FLightmassMaterialInterfaceSettings
{
	float                                              DistanceFieldPenumbraScale;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCastShadowAsMasked : 1;                          		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverrideCastShadowAsMasked : 1;                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverrideEmissiveBoost : 1;                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverrideDiffuseBoost : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverrideSpecularBoost : 1;                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverrideExportResolutionScale : 1;               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOverrideDistanceFieldPenumbraScale : 1;          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct Engine.Material.MaterialInput
// 0x001C
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                GCC64_Padding;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008(0x0024 - 0x001C)
struct FColorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Constant;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008(0x0024 - 0x001C)
struct FScalarMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Constant;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010(0x002C - 0x001C)
struct FVectorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Constant;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C(0x0028 - 0x001C)
struct FVector2MaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConstantX;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ConstantY;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	unsigned long                                      bPainCausing : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DownloadableContentOfferEnumerator.MarketplaceOffer
// 0x002C
struct FMarketplaceOffer
{
	int                                                OfferId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ContentCategory;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     OfferName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            ContentId;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsUnrestrictedLicense : 1;                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LicenseMask;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUserHasPurchased : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.DownloadableContentManager.InstalledContentInfo
// 0x0040
struct FInstalledContentInfo
{
	unsigned char                                      ContentType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     ContentName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ContentPath;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Filename;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DeviceID;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                LicenseMask;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasSeen : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FAppIdLicenseInfo >                 CachedAppIdInfo;                                  		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.DownloadableContentManager.MarketplaceOfferDownloadState
// 0x0004
struct FMarketplaceOfferDownloadState
{
	unsigned long                                      bIsDownloaded : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsInstalled : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DownloadableContentManager.RejectedContentInfo
// 0x0001(0x0041 - 0x0040)
struct FRejectedContentInfo : FInstalledContentInfo
{
	unsigned char                                      Result;                                           		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.DownloadableContentManager.DlcContentId
// 0x0008
struct FDlcContentId
{
	int                                                PackageId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ContentId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.DownloadableContentManager.DlcContentInfo
// 0x000C
struct FDlcContentInfo
{
	struct FDlcContentId                               ContentId;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsInstalled : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLicensed : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DownloadableContentManager.DlcCompatibilityData
// 0x0010
struct FDlcCompatibilityData
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                D;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bCollideActors : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlockActors : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsReplication : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x003C
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                         		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0040
struct FParticleSysParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ParamType;                                        		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scalar;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scalar_Low;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Vector;                                           		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Vector_Low;                                       		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Color;                                            		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Actor;                                            		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Socket;                                           		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              EmitterTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000(0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004(0x0038 - 0x0034)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020(0x0054 - 0x0034)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Item;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventTraceData
// 0x0004(0x0038 - 0x0034)
struct FParticleEventTraceData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010(0x0044 - 0x0034)
struct FParticleEventKismetData : FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x003C
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                                		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x0024
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      Base;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      bInheritBaseScale : 1;                            		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	unsigned long                                      bLit : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                               		// 0x0000 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct FColor                                      Out;                                              		// 0x0004 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x001C
struct FStatColorMapping
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	TArray< struct FStatColorMapEntry >                ColorMap;                                         		// 0x000C (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	unsigned long                                      DisableBlend : 1;                                 		// 0x0018 (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0024
struct FDropNoteInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FString                                     Comment;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x0008
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MaterialIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0004
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x001C
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPrimitiveMaterialRef >             AffectedMaterialRefs;                             		// 0x0004 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< struct FPostProcessMaterialRef >           AffectedPPChainMaterialRefs;                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.FaceFXAsset.GroupAnimationAndSoundIdentifier
// 0x0024
struct FGroupAnimationAndSoundIdentifier
{
	struct FString                                     SoundNodeWaveName;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceFXGroupName;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceFXAnimName;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FoliageComponent.FoliageInstanceBase
// 0x0034
struct FFoliageInstanceBase
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     XAxis;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     YAxis;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     ZAxis;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              DistanceFactorSquared;                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.FoliageComponent.StoredFoliageInstance
// 0x000C(0x0040 - 0x0034)
struct FStoredFoliageInstance : FFoliageInstanceBase
{
	struct FColor                                      StaticLighting[ 0x3 ];                            		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.FoliageFactory.FoliageMesh
// 0x0048
struct FFoliageMesh
{
	class UStaticMesh*                                 InstanceStaticMesh;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDrawRadius;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTransitionRadius;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinThinningRadius;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MinScale;                                         		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxScale;                                         		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinUniformScale;                                  		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUniformScale;                                  		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwayScale;                                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Seed;                                             		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SurfaceAreaPerInstance;                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCreateInstancesOnBSP : 1;                        		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCreateInstancesOnStaticMeshes : 1;               		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCreateInstancesOnTerrain : 1;                    		// 0x0040 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class UFoliageComponent*                           Component;                                        		// 0x0044 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x0094
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableAntialiasing : 1;                          		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableBold : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableItalic : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableUnderline : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAlphaOnly : 1;                                   		// 0x0010 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      CharacterSet;                                     		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Chars;                                            		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UnicodeRange;                                     		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CharsFilePath;                                    		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CharsFileWildcard;                                		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCreatePrintableOnly : 1;                         		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeASCIIRange : 1;                           		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FLinearColor                                ForegroundColor;                                  		// 0x004C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableDropShadow : 1;                            		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TexturePageWidth;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TexturePageMaxHeight;                             		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                XPadding;                                         		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YPadding;                                         		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxTop;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxBottom;                                  		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxRight;                                   		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExtendBoxLeft;                                    		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableLegacyMode : 1;                            		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                Kerning;                                          		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseDistanceFieldAlpha : 1;                       		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                DistanceFieldScaleFactor;                         		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DistanceFieldScanRadiusScale;                     		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartV;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                USize;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VSize;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TextureIndex;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalOffset;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                    		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RightAmplitude;                                   		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LeftFunction;                                     		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RightFunction;                                    		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0028
struct FFullyLoadedPackagesInfo
{
	unsigned char                                      FullyLoadType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             PackagesToLoad;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UObject* >                           LoadedObjects;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x000C
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    NetDriver;                                        		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0018
struct FAnimTag
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Contains;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GameEngine.URL
// 0x0044
struct FURL
{
	struct FString                                     Protocol;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Host;                                             		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x0018 (0x0004) [0x0000000000100000]              
	struct FString                                     Map;                                              		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Op;                                               		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Portal;                                           		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Valid;                                            		// 0x0040 (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0018
struct FGameClassShortName
{
	struct FString                                     ShortName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameClassName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0034
struct FGameTypePrefix
{
	struct FString                                     Prefix;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUsesCommonPackage : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     GameType;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AdditionalGameTypes;                              		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ForcedObjects;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0030
struct FPlayerInformation
{
	struct FName                                       ControllerName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                UniqueId;                                         		// 0x0014 (0x0018) [0x0000000000000000]              
	unsigned long                                      bIsBot : 1;                                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x0018
struct FTeamInformation
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      TeamColor;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxSize;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	unsigned char                                      Group;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FGameStatGroup                              StatGroup;                                        		// 0x000C (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                EventDataType;                                    		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	struct FName                                       DamageClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	struct FName                                       ProjectileClassName;                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	struct FName                                       PawnClassName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x002C
struct FGameplayEventsHeader
{
	int                                                EngineVersion;                                    		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StatsWriterVersion;                               		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StreamOffset;                                     		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AggregateOffset;                                  		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                FooterOffset;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TotalStreamSize;                                  		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                FileSize;                                         		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     FilterClass;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Flags;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x0080
struct FGameSessionInformation
{
	int                                                AppTitleID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlatformType;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Language;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameplaySessionTimestamp;                         		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              GameplaySessionStartTime;                         		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GameplaySessionEndTime;                           		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bGameplaySessionInProgress : 1;                   		// 0x0028 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FString                                     GameplaySessionID;                                		// 0x002C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     GameClassName;                                    		// 0x0038 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0044 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     MapURL;                                           		// 0x0050 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                SessionInstance;                                  		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GameTypeId;                                       		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                OwningNetId;                                      		// 0x0064 (0x0018) [0x0000000000000002]              ( CPF_Const )
	int                                                PlaylistId;                                       		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicStateInfo
// 0x000C
struct FMusicStateInfo
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	class UAkState*                                    CustomCombatMusicAkState;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAkState*                                    CustomAmbientMusicAkState;                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0024
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPersistentAcrossLevels : 1;                      		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInVolumeLevel;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeOutVolumeLevel;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MP3Filename;                                      		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x0018
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int                                                ListIdx;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UNavMeshPathGoalEvaluator*                   List[ 0x5 ];                                      		// 0x0004 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ParticlesLodMin;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParticlesLodMax;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PacketsPerPhysXParticleSystemMax;                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyCylindricalPacketCulling : 1;               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              SpawnLodVsFifoBias;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                         		// 0x0000 (0x0018) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x001C
struct FHostMigrationState
{
	unsigned char                                      HostMigrationProgress;                            		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              HostMigrationElapsedTime;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              HostMigrationTravelCountdown;                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     HostMigrationTravelURL;                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHostMigrationEnabled : 1;                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.WorldInfo.NavigationArea
// 0x000C
struct FNavigationArea
{
	struct FName                                       AreaName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FColor                                      AreaColor;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLimitExplosionChunkSize : 1;                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MaxExplosionChunkSize;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLimitDamageChunkSize : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDamageChunkSize;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxNumFacturedChunksToSpawnInAFrame;              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FractureExplosionVelScale;                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x0018
struct FNavMeshPathConstraintCacheDatum
{
	int                                                ListIdx;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UNavMeshPathConstraint*                      List[ 0x5 ];                                      		// 0x0004 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x003C
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumIndirectLightingBounces;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      EnvironmentColor;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnvironmentIntensity;                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EmissiveBoost;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DiffuseBoost;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpecularBoost;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              IndirectNormalInfluenceBoost;                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseAmbientOcclusion : 1;                         		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              DirectIlluminationOcclusionFraction;              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IndirectIlluminationOcclusionFraction;            		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OcclusionExponent;                                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullyOccludedSamplesFraction;                     		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxOcclusionDistance;                             		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bVisualizeMaterialDiffuse : 1;                    		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bVisualizeAmbientOcclusion : 1;                   		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCompressShadowmap : 1;                           		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0020
struct FScreenMessageString
{
	struct FQWord                                      Key;                                              		// 0x0000 (0x0008) [0x0000000000102000]              ( CPF_Transient )
	struct FString                                     ScreenMessage;                                    		// 0x0008 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FColor                                      DisplayColor;                                     		// 0x0014 (0x0004) [0x0000000000102000]              ( CPF_Transient )
	float                                              TimeToDisplay;                                    		// 0x0018 (0x0004) [0x0000000000102000]              ( CPF_Transient )
	float                                              CurrentTimeDisplayed;                             		// 0x001C (0x0004) [0x0000000000102000]              ( CPF_Transient )
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0010
struct FApexModuleDestructibleSettings
{
	int                                                MaxChunkIslandCount;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxRrbActorCount;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxChunkSeparationLOD;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverrideMaxChunkSeparationLOD : 1;               		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFixedTimeStep : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              TimeStep;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxSubSteps;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                     		// 0x0000 (0x000C) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                             		// 0x000C (0x000C) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FPhysXSimulationProperties                  CompartmentFluid;                                 		// 0x0018 (0x000C) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FPhysXSimulationProperties                  CompartmentCloth;                                 		// 0x0024 (0x000C) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                              		// 0x0030 (0x000C) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Fluid : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0020
struct FNetViewer
{
	class APlayerController*                           InViewer;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Viewer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     ViewLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     ViewDir;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.LevelGroup
// 0x002C
struct FLevelGroup
{
	unsigned long                                      bCollapsed : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      GroupColor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      Levels;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LevelGridVolumes;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GroupName;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxPercentY;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RecommendedPercentX;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RecommendedPercentY;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OriginX;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              OriginY;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x000C
struct FSplitscreenData
{
	TArray< struct FPerPlayerSplitscreenData >         PlayerData;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0010
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       PropertyName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSpecialProperty : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GBXNavMesh.GBXConnectedNavMesh
// 0x0008
struct FGBXConnectedNavMesh
{
	class AGBXNavMesh*                                 Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MeshID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshVertex
// 0x0000(0x000C - 0x000C)
struct FGBXNavMeshVertex : FVector
{
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPoly
// 0x000E
struct FGBXNavMeshPoly
{
	unsigned char                                      Verts[ 0x6 ];                                     		// 0x0000 (0x0006) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned char                                      ConnectedPolys[ 0x6 ];                            		// 0x0006 (0x0006) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned char                                      PolyDataIdx[ 0x2 ];                               		// 0x000C (0x0002) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
};

// ScriptStruct Engine.GBXNavMesh.GBXNavmeshCrossLevelConnection
// 0x0006
struct FGBXNavmeshCrossLevelConnection
{
	unsigned char                                      EdgeIdx[ 0x2 ];                                   		// 0x0000 (0x0002) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned char                                      ConnectedNavmeshIdx[ 0x2 ];                       		// 0x0002 (0x0002) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned char                                      PolyIdx[ 0x2 ];                                   		// 0x0004 (0x0002) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshSpecialMove
// 0x0030
struct FGBXNavMeshSpecialMove
{
	int                                                DestinationPolyIdx;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DestinationMeshIdx;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CrossLevelMoverIdx;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ActorSpecialMoveId;                               		// 0x000C (0x0004) [0x0000000000000000]              
	class UIGBXNavMeshSpecialMove*                     Mover;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0014 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     LocalSpaceSrcLocation;                            		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocalSpaceDestLocation;                           		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPolyData
// 0x0024
struct FGBXNavMeshPolyData
{
	TArray< struct FGBXNavmeshCrossLevelConnection >   CrossLevelConnections;                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FGBXNavMeshSpecialMove >            SpecialMoves;                                     		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Obstacles[ 0xC ];                                 		// 0x0018 (0x000C) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPathSize
// 0x0014
struct FGBXNavMeshPathSize
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FColor                                      DrawColor;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      ObstacleDrawColor;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StartIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshObstacleData
// 0x0008
struct FGBXNavMeshObstacleData
{
	class UGBXCrossLevelReferenceContainer*            Obstacle;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MinAffectedPathSize;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPolyRef
// 0x0008
struct FGBXNavMeshPolyRef
{
	class AGBXNavMesh*                                 NavMesh;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PolyIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshLookupCell
// 0x000C
struct FGBXNavMeshLookupCell
{
	struct FArray_Mirror                               IntersectingPolys;                                		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPolyLookup
// 0x0038
struct FGBXNavMeshPolyLookup
{
	int                                                XCells;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                YCells;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Origin;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     CellSize;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	TArray< int >                                      CellIndices;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FGBXNavMeshLookupCell >             Cells;                                            		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GBXNavMesh.GBXLineCheckResult
// 0x001C
struct FGBXLineCheckResult
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GBXNavMeshPathFinder.IGBXNavMeshObstaclePointer
// 0x0004
struct FIGBXNavMeshObstaclePointer
{
	struct FPointer                                    Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.GBXNavMeshPathFinder.GBXNavMeshPathPoint
// 0x0028
struct FGBXNavMeshPathPoint
{
	struct FGBXNavMeshPolyRef                          Poly;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                SpecialMoveId;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              NextPathObjectDistance;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FIGBXNavMeshObstaclePointer >       CrossedObstacles;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.GBXNavMeshPathFinder.GBXNavMeshPath
// 0x0010
struct FGBXNavMeshPath
{
	TArray< struct FGBXNavMeshPathPoint >              PathPoints;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentPathIdx;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0050
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                        		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bCanMantle : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanPhysicsJump : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PhysicsJumpCostMultiplier;                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsMantleValidityTest : 1;                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAbleToSearch : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     SearchExtent;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              SearchLaneMultiplier;                             		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector                                     SearchStart;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              MaxDropHeight;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              MinWalkableZ;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              MaxHoverDistance;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           ObstaclesToIgnore;                                		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              LookAheadDistance;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              CornerCutDistance;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              LookInterpRate;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x001C
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                             		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     P1;                                               		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     P2;                                               		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0004
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0018
struct FPathStore
{
	TArray< struct FEdgePointer >                      EdgeList;                                         		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< float >                                    PathDistances;                                    		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.GearboxEngineGlobals.PlayerOwnedComponent
// 0x0008
struct FPlayerOwnedComponent
{
	class AActor*                                      PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UActorComponent*                             Component;                                        		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct Engine.GearboxEngineGlobals.AkCallBackGetRTPC
// 0x0010
struct FAkCallBackGetRTPC
{
	class UAkRtpc*                                     RTPC;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     Owner;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAkComponent*                                Component;                                        		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              CallbackValue;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GestaltPartMatrices.GestaltAccessoryPartEntry
// 0x0014
struct FGestaltAccessoryPartEntry
{
	struct FName                                       PartName;                                         		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                MatrixIndex;                                      		// 0x0010 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct Engine.GestaltPartMatrices.GestaltAccessoryGroupEntry
// 0x0014
struct FGestaltAccessoryGroupEntry
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< struct FGestaltAccessoryPartEntry >        GestaltAccessoryPartList;                         		// 0x0008 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct Engine.GestaltPartMatrices.GestaltAccessoryMeshEntry
// 0x0014
struct FGestaltAccessoryMeshEntry
{
	struct FName                                       MeshName;                                         		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< struct FGestaltAccessoryGroupEntry >       GestaltAccessoryGroupList;                        		// 0x0008 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct Engine.GestaltPartMatricesCollectionDefinition.GPMCollection
// 0x0004
struct FGPMCollection
{
	class UGestaltPartMatrices*                        CollectionData;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x0018
struct FActorToLookAt
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Rating;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EnteredTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LastKnownDistance;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              StartTimeBeingLookedAt;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      CurrentlyBeingLookedAt : 1;                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.HybridNavigationVisualizationComponent.HybridNavVisualizationVert
// 0x0010
struct FHybridNavVisualizationVert
{
	struct FVector                                     Vert;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bValidSegmentEndpoint : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.HybridNavigationVisualizationComponent.HybridNavVisualizationVertsForNavPoint
// 0x002C
struct FHybridNavVisualizationVertsForNavPoint
{
	TArray< struct FHybridNavVisualizationVert >       Verts;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bWasDrawn : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FirstVertDrawn;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastVertDrawn;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              VerticalReach;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.HybridNavigationVisualizationComponent.HybridNavVisualizationPerfStats
// 0x002C
struct FHybridNavVisualizationPerfStats
{
	int                                                VisualizationBuildingStartTime;                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                VisualizationBuildingEndTime;                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CyclesBuildingVisualization;                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumberOfNodesConsidered;                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumberOfTraces;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumberOfEndPointAttempts;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                NumberOfSideAttempts;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumberOfNodesInVisualization;                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumberOfPointsInVisualization;                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                NumClosestNodesRequests;                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                NumClosestNodeTests;                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.IBodyCompositionInstance.ReplicatedCoordinatedEffect
// 0x0008
struct FReplicatedCoordinatedEffect
{
	int                                                Effects;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Targets;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.IGBXNavMeshSpecialMove.GBXNavMeshSpecialMoveConnection
// 0x002C
struct FGBXNavMeshSpecialMoveConnection
{
	struct FGBXNavMeshPolyRef                          SrcPoly;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     SrcLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FGBXNavMeshPolyRef                          DestPoly;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector                                     DestLocation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	int                                                MoveId;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0011
struct FIniLocFileEntry
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsUnicode : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ReadState;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InstanceDataHelper.BodyInstanceDataUnion
// 0x0065
struct FBodyInstanceDataUnion
{
	struct FInstanceDataUnion                          Data;                                             		// 0x0000 (0x0058) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FName                                       ParentAttachmentIdentifier;                       		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AttachmentBaseInstanceDataIndex;                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SwitchIdentifier;                                 		// 0x0064 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InstanceDataHelper.BodyCompositionData
// 0x0014
struct FBodyCompositionData
{
	TArray< struct FBodyInstanceDataUnion >            Attachments;                                      		// 0x0000 (0x000C) [0x0000000000580000]              ( CPF_Component | CPF_NeedCtorLink )
	unsigned char                                      MaxExpectedComponents;                            		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      HasHomingTargetComponents : 1;                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                        		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FVector2D                                   LightmapUVBias;                                   		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ShadowmapUVBias;                                  		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0010
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                          		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    LightMap;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UTexture2D*                                  LightmapTexture;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UShadowMap2D*                                ShadowmapTexture;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      CollisionType;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsShutdown : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsPositionReplication : 1;                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x002C
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FColor                                      CurveColor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CurveName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                bHideCurve;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                bColorCurve;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                bFloatingPointColorCurve;                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                bClamp;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ClampLow;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              ClampHigh;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0028
struct FCurveEdTab
{
	struct FString                                     TabName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCurveEdEntry >                     Curves;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ViewStartInput;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ViewEndInput;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ViewStartOutput;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ViewEndOutput;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0010
struct FAnimSetBakeAndPruneStatus
{
	struct FString                                     AnimSetName;                                      		// 0x0000 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      bReferencedButUnused : 1;                         		// 0x000C (0x0004) [0x0000000000020001] [0x00000001] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bSkipBakeAndPrune : 1;                            		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0010
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UInterpTrack*                                Track;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                KeyIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              UnsnappedPosition;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x001C
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      TrackIndices;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsCollapsed : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsSelected : 1;                                  		// 0x0018 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x0014
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SubTrackName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GroupIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AnimSeqName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              AnimStartOffset;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AnimEndOffset;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReverse : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Value : 1;                                        		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackComment.CommentTrackKey
// 0x0010
struct FCommentTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Comment;                                          		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0010
struct FDirectorTrackCut
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TransitionTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       TargetCamGroup;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x001C
struct FFaceFXTrackKey
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FaceFXGroupName;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceFXSeqName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0008
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                   		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    FaceFXAkEvent;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0018
struct FFloatMaterialParamMICData
{
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< float >                                    MICResetFloats;                                   		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ToggleAction;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0018
struct FVectorMaterialParamMICData
{
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FVector >                           MICResetVectors;                                  		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ActiveCondition;                                  		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x000C
struct FInterpLookupTrack
{
	TArray< struct FInterpLookupPoint >                Points;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClipIDNumber;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0010
struct FSoundTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.InterpTrackTeleport.TeleportKeyData
// 0x001C
struct FTeleportKeyData
{
	float                                              KeyTime;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LocationKey;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotationKey;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.KActorPizazz.ImpulseData
// 0x0018
struct FImpulseData
{
	struct FVector                                     Impulse;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Source;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0010
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[ 0x4 ];                              		// 0x0000 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x0010
struct FLandscapeLayerInfo
{
	struct FName                                       LayerName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Hardness;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNoWeightBlend : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Landscape.LandscapeAddCollision
// 0x0000
struct FLandscapeAddCollision
{
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      WeightmapTextureIndex;                            		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeightmapTextureChannel;                          		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0144
struct FLensFlareElement
{
	struct FName                                       ElementName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RayDistance;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsEnabled : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseSourceDistance : 1;                           		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNormalizeRadialDistance : 1;                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bModulateColorBySource : 1;                       		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FVector                                     Size;                                             		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                LFMaterials;                                      		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       LFMaterialIndex;                                  		// 0x0028 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       Scaling;                                          		// 0x0044 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      AxisScaling;                                      		// 0x0060 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       Rotation;                                         		// 0x007C (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	unsigned long                                      bOrientTowardsSource : 1;                         		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FRawDistributionVector                      Color;                                            		// 0x009C (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       Alpha;                                            		// 0x00B8 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      Offset;                                           		// 0x00D4 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      DistMap_Scale;                                    		// 0x00F0 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      DistMap_Color;                                    		// 0x010C (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       DistMap_Alpha;                                    		// 0x0128 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0010
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UObject*                                     CurveObject;                                      		// 0x000C (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x000C
struct FLensFlareElementMaterials
{
	TArray< class UMaterialInterface* >                ElementMaterials;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x0100
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                         		// 0x0000 (0x00E8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBlendingIn : 1;                                  		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlendingOut : 1;                                 		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurrentBlendInTime;                               		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              CurrentBlendOutTime;                              		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              BlendInDuration;                                  		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              BlendOutDuration;                                 		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              BlendStartTime;                                   		// 0x00FC (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.WorldLightingOverride
// 0x0020
struct FWorldLightingOverride
{
	struct FRotator                                    DirectionOffset;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              FadeInTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RemainingFadeTime;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      RemovalRequested : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pMovie;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x00F4
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                     		// 0x0000 (0x00E8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APostProcessVolume*                          LastVolumeUsed;                                   		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              BlendStartTime;                                   		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              LastBlendTime;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0008
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CriticalSection;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ManufacturerDefinition.ManufacturerGradeData
// 0x000C
struct FManufacturerGradeData
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ManufacturerDefinition.ManufacturerCustomGradeWeightData
// 0x0005
struct FManufacturerCustomGradeWeightData
{
	class UManufacturerDefinition*                     Manufacturer;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      DefaultWeightIndex;                               		// 0x0004 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x001C
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                GCC64_Padding;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0028
struct FCustomInput
{
	struct FString                                     InputName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FExpressionInput                            Input;                                            		// 0x000C (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0020
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UFont*                                       FontValue;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontPage;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x001C
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ExpressionGUID;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       ParameterName;                                    		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoop : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoActivate : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              CycleTime;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              OffsetTime;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x0008(0x0038 - 0x0030)
struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontPage;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0014(0x0044 - 0x0030)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0034 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0004(0x0034 - 0x0030)
struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0020(0x0050 - 0x0030)
struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x0018
struct FMorphNodeConn
{
	TArray< class UMorphNodeBase* >                    ChildNodes;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ConnName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetWeight;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x0008
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExtraCost;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x000C
struct FMMStats_Timer
{
	unsigned long                                      bInProgress : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDouble                                     MSecs;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x0018
struct FOnlineProfileSetting
{
	unsigned char                                      Owner;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FSettingsProperty                           ProfileSetting;                                   		// 0x0004 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataProvider.UIDataProviderField
// 0x0018
struct FUIDataProviderField
{
	struct FName                                       FieldTag;                                         		// 0x0000 (0x0008) [0x0000000000100000]              
	unsigned char                                      FieldType;                                        		// 0x0008 (0x0001) [0x0000000000100000]              
	TArray< class UUIDataProvider* >                   FieldProviders;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0024
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0018) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PartyMembers;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0020
struct FCurrentPlayerMet
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0018) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0010
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               StatValue;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x003C
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0018) [0x0000000000000002]              ( CPF_Const )
	struct FSettingsData                               Rank;                                             		// 0x0018 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NickName;                                         		// 0x0024 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FOnlineStatsColumn >                Columns;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0018
struct FColumnMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ColumnName;                                       		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x0028
struct FParticleBurst
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CountLow;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRawDistributionFloat                       CountDistribution;                                		// 0x000C (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0010
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UObject*                                     CurveObject;                                      		// 0x000C (0x0004) [0x0000000000100000]              
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x0018
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bGetSeedFromInstance : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInstanceSeedIsIndex : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bResetSeedOnEmitterLooping : 1;                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	TArray< int >                                      RandomSeeds;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bScale : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Frequency;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowFreq;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParticleFrequency;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FirstTimeOnly : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      LastTimeOnly : 1;                                 		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      UseReflectedImpactVector : 1;                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       CustomName;                                       		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UParticleModuleEventSendToGame* >    ParticleModuleEventsToSendToGame;                 		// 0x001C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bProcessDuringUpdate : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0030
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSpawnTimeOnly : 1;                               		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      ValueMethod;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bScaleVelocityByParamValue : 1;                   		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FRawDistributionFloat                       ParamValue;                                       		// 0x0014 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetPercentage;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeightForSpawnLod;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnLodRateVsLifeBias;                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RelativeFadeoutTime;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x000C
struct FLODSoloTrack
{
	TArray< unsigned char >                            SoloEnableSetting;                                		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x000C
struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;                                      		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                OriginalEmitterIndex;                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    FrameState;                                       		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x000C
struct FParticleSystemReplayFrame
{
	TArray< struct FParticleEmitterReplayFrame >       Emitters;                                         		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.PersistentSequenceData.PersistentData
// 0x0004
struct FPersistentData
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
};

// ScriptStruct Engine.PersistentSequenceData.PersistentSequenceEventData
// 0x0004(0x0008 - 0x0004)
struct FPersistentSequenceEventData : FPersistentData
{
	int                                                TriggerCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PersistentSequenceData.PersistentSeqAct_InterpData
// 0x0004(0x0008 - 0x0004)
struct FPersistentSeqAct_InterpData : FPersistentData
{
	float                                              Position;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0010
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class USequenceOp*                                 Op;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InputIdx;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RemainingDelay;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x001C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      InOriginator;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      InInstigator;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ActivateIndices;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPushTop : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x000C
struct FKCachedConvexDataElement
{
	TArray< unsigned char >                            ConvexElementData;                                		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x000C
struct FKCachedConvexData
{
	TArray< struct FKCachedConvexDataElement >         CachedConvexElements;                             		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              LimitSize;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.ResourcePoolManager.ResourcePoolIdentityState
// 0x0005
struct FResourcePoolIdentityState
{
	class UResourcePoolDefinition*                     PoolDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      PoolGUID;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.ResourcePoolManager.RarelyChangedPoolState
// 0x0014
struct FRarelyChangedPoolState
{
	float                                              ConsumptionRate;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ActiveRegenerationRate;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OnIdleRegenerationRate;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              OnIdleRegenerationDelay;                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PassiveRegenerationRate;                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CrouchHeight;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      PathColor;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x000C
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                            		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       LevelName;                                        		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bFallThru;                                        		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x0008
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFallThru : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDefaultValue : 1;                                		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct Engine.ShadowRelevanceVolume.ShadowRelevanceSizePair
// 0x0006
struct FShadowRelevanceSizePair
{
	float                                              Size;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DynamicShadowCastRelevance;                       		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      OverrideStaticShadowSettings;                     		// 0x0005 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Bary;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x0018
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      AttachedVertexIndices;                            		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0018
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneType;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      AttachedVertexIndices;                            		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	unsigned char                                      TriangleSorting;                                  		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CustomLeftRightAxis;                              		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CustomLeftRightBoneName;                          		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x003C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LODHysteresis;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      LODMaterialMap;                                   		// 0x0008 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< unsigned long >                            bEnableShadowCasting;                             		// 0x0014 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< unsigned char >                            TriangleSorting;                                  		// 0x0020 (0x000C) [0x0000000020400000]              ( CPF_NeedCtorLink | CPF_Deprecated )
	TArray< struct FTriangleSortSettings >             TriangleSortSettings;                             		// 0x002C (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	unsigned long                                      bDisableCompressions : 1;                         		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SourceBoneName;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneFlipAxis;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneFlipAxis;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x000C
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      TargetActor;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	unsigned long                                      bReplicated : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSavedPosition : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x0008
struct FSkelMaterialSetterDatum
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          TheMaterial;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int                                                NodePosX;                                         		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NodePosY;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StereoBleed;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LFEBleed;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VoiceCenterChannelVolume;                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadioFilterVolume;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RadioFilterVolumeThreshold;                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyEffects : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAlwaysPlay : 1;                                  		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsUISound : 1;                                   		// 0x001C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsMusic : 1;                                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bReverb : 1;                                      		// 0x001C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bCenterChannelOnly : 1;                           		// 0x001C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIsDialog : 1;                                    		// 0x001C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bIsAmbience : 1;                                  		// 0x001C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                         		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NodePosY;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	unsigned char                                      SoundClassName;                                   		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       SoundClass;                                       		// 0x0004 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              VolumeAdjuster;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchAdjuster;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyToChildren : 1;                             		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              VoiceCenterChannelVolumeAdjuster;                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                         		// 0x0000 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              HFFrequency;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HFGain;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MFCutoffFrequency;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MFBandwidth;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MFGain;                                           		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LFFrequency;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LFGain;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x001C
struct FRecognisableWord
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ReferenceWord;                                    		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PhoneticWord;                                     		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0048
struct FRecogVocabulary
{
	TArray< struct FRecognisableWord >                 WhoDictionary;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FRecognisableWord >                 WhatDictionary;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FRecognisableWord >                 WhereDictionary;                                  		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     VocabName;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            VocabData;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            WorkingVocabData;                                 		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0010
struct FRecogUserData
{
	int                                                ActiveVocabularies;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            UserData;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0008
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                                  		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ASplineActor*                                ConnectTo;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartTangent;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector2D                                   StartScale;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              StartRoll;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   StartOffset;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FVector                                     EndPos;                                           		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTangent;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   EndScale;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
	float                                              EndRoll;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   EndOffset;                                        		// 0x0050 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x0008
struct FSMMaterialSetterDatum
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          TheMaterial;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x004C
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                          		// 0x0000 (0x0040) [0x0000000000000000]              
	unsigned char                                      ServerBrake;                                      		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerGas;                                        		// 0x0041 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerSteering;                                   		// 0x0042 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerRise;                                       		// 0x0043 (0x0001) [0x0000000000000000]              
	unsigned long                                      bServerHandbrake : 1;                             		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ServerView;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TargetableList.SearchState
// 0x001C
struct FSearchState
{
	class UITargetable*                                Subject;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                ListIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class UITargetable* >                      CurrentList;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0020
struct FTerrainLayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTerrainLayerSetup*                          Setup;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AlphaMapIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      Highlighted : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      WireframeHighlighted : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Hidden : 1;                                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FColor                                      HighlightColor;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      WireframeColor;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0014
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0024
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                          		// 0x0000 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              MinScale;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxScale;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Density;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlopeRotationBlend;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RandSeed;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTerrainDecorationInstance >        Instances;                                        		// 0x0018 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x001C
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTerrainDecoration >                Decorations;                                      		// 0x000C (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	int                                                AlphaMapIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x000C
struct FCachedTerrainMaterialArray
{
	TArray< struct FPointer >                          CachedMaterials;                                  		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x000C
struct FTerrainBVTree
{
	TArray< int >                                      Nodes;                                            		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.TerrainComponent.TerrainkDOPTree
// 0x0018
struct FTerrainkDOPTree
{
	TArray< int >                                      Nodes;                                            		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< int >                                      Triangles;                                        		// 0x000C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Base;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoiseScale;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoiseAmount;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0054
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              NoiseScale;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoisePercent;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MinHeight;                                        		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MaxHeight;                                        		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MinSlope;                                         		// 0x002C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FFilterLimit                                MaxSlope;                                         		// 0x003C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              Alpha;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTerrainMaterial*                            Material;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TerrainMaterial.TerrainFoliageMesh
// 0x0038
struct FTerrainFoliageMesh
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Density;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDrawRadius;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTransitionRadius;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinScale;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxScale;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinUniformScale;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUniformScale;                                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinThinningRadius;                                		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Seed;                                             		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwayScale;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AlphaMapThreshold;                                		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlopeRotationBlend;                               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0014
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OffsetY;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SizeY;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture2D;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	unsigned long                                      bCollideActors : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0008
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldBlockOnLoad : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class ULevelStreaming*                             Level;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x0010
struct FPlayerStorageArrayProvider
{
	int                                                PlayerStorageId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       PlayerStorageName;                                		// 0x0004 (0x0008) [0x0000000000000000]              
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataProvider_Settings.SettingsArrayProvider
// 0x0010
struct FSettingsArrayProvider
{
	int                                                SettingsId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SettingsName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	class UUIDataProvider_SettingsArray*               Provider;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0018
struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ProviderClassName;                                		// 0x0008 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ProviderClass;                                    		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x001C
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ProviderClassName;                                		// 0x0008 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bExpandProviders : 1;                             		// 0x0014 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	class UClass*                                      ProviderClass;                                    		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x0018
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                     		// 0x0000 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ButtonFontMarkupString;                           		// 0x000C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x0050
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                        		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FUIInputKeyData                             PlatformInputKeys[ 0x3 ];                         		// 0x0008 (0x0048) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x0028
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      DefaultGameSettingsClass;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      SearchResultsProviderClass;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                          		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class UUIDataProvider_Settings* >          SearchResults;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           Search;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       SearchName;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0014
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIDataProvider_Settings*                    Provider;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       SettingsName;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0014
struct FRankMetaData
{
	struct FName                                       RankName;                                         		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     RankColumnName;                                   		// 0x0008 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0014
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                   		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PlayerNickColumnName;                             		// 0x0008 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x001C
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Set;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     MappedText;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                 		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FDouble                                     NextRepeatTime;                                   		// 0x0008 (0x0008) [0x0000000000100000]              
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004(0x0014 - 0x0010)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x000C
struct FSoundEventMapping
{
	struct FName                                       SoundEventName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundToPlay;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Engine.WillowInventoryDefinition.UIStatData
// 0x0024
struct FUIStatData
{
	unsigned long                                      bDisplayAsModifierOnly : 1;                       		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned char                                      AttributeStyle;                                   		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      SupplementalAttributeStyle;                       		// 0x0005 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      StatCombinationMethod;                            		// 0x0006 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAttributeDefinition*                        Attribute;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAttributeDefinition*                        ConstraintAttribute;                              		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeExpressionData                    SupplementalAttributeExpression;                  		// 0x0010 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAttributeDefinition*                        SupplementalAttributeToAppend;                    		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.WillowInventoryDefinition.AttributeSlotEffectData
// 0x004C
struct FAttributeSlotEffectData
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bExternalSlot : 1;                                		// 0x0008 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bRunEffectsAsSkill : 1;                           		// 0x0008 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class UAttributeDefinition*                        AttributeToModify;                                		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAttributeDefinition*                        ConstraintAttribute;                              		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ModifierType;                                     		// 0x0014 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                BaseModifierValue;                                		// 0x0018 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                PerGradeUpgrade;                                  		// 0x0028 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bIncludeInFunStats : 1;                           		// 0x0038 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bIncludeAlliesAsTarget : 1;                       		// 0x0038 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bEnforceMinimumGrade : 1;                         		// 0x0038 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bEnforceMaximumGrade : 1;                         		// 0x0038 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	int                                                MinimumGrade;                                     		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaximumGrade;                                     		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       TargetInstanceDataName;                           		// 0x0044 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.WillowInventoryDefinition.AttributeSlotUpgradeData
// 0x0010
struct FAttributeSlotUpgradeData
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GradeIncrease;                                    		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bActivateSlot : 1;                                		// 0x000C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Engine.WillowInventory.InventorySerialNumber
// 0x0034
struct FInventorySerialNumber
{
	unsigned char                                      Buffer[ 0x28 ];                                   		// 0x0000 (0x0028) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0028 (0x0001) [0x0000000000000000]              
	int                                                RunningCounter;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                EncryptedLength;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WillowInventory.AttributeSlotData
// 0x0050
struct FAttributeSlotData
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bExternalSlot : 1;                                		// 0x0008 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bRunEffectsAsSkill : 1;                           		// 0x0008 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bActivated : 1;                                   		// 0x0008 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bIncludeAlliesAsTarget : 1;                       		// 0x0008 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bIncludeInModifierText : 1;                       		// 0x0008 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bEnforceMinimumGrade : 1;                         		// 0x0008 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      bEnforceMaximumGrade : 1;                         		// 0x0008 (0x0004) [0x0000000000000002] [0x00000040] ( CPF_Const )
	int                                                MinimumGrade;                                     		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaximumGrade;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       TargetInstanceDataName;                           		// 0x0014 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                EffectGrade;                                      		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAttributeDefinition*                        AttributeToModify;                                		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAttributeDefinition*                        ConstraintAttribute;                              		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      ModifierType;                                     		// 0x0028 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FAttributeInitializationData                BaseModifierValue;                                		// 0x002C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FAttributeInitializationData                PerGradeUpgrade;                                  		// 0x003C (0x0010) [0x0000000000000002]              ( CPF_Const )
	float                                              ComputedModifierValue;                            		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Engine.WorldSoundManager.WorldEventSource
// 0x0028
struct FWorldEventSource
{
	class UAkEvent*                                    AkEvent;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      GroupActor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UAkComponent* >                      AkComponents;                                     		// 0x0008 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class AActor* >                            Sources;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastUpdateTime;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsUpdate : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif