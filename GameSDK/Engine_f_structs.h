/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/
#ifndef ENGINEFCLASSES_H
#define ENGINEFCLASSES_H

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function Engine.SkeletalMeshComponent.GetBoneLocation
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USkeletalMeshComponent_execGetBoneLocation_Parms
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Space;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.Spawn
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AActor_execSpawn_Parms
{
	class UClass*                                      SpawnClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      SpawnOwner;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       SpawnTag;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ActorTemplate;                                    		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoCollisionFail : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function Engine.Console.ConsoleCommand
// [0x00020802] ( FUNC_Event )
struct UConsole_eventConsoleCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Engine.Console.OutputText
// [0x00020802] ( FUNC_Event )
struct UConsole_eventOutputText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	// struct FString                                  RemainingText;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Engine.PlayerController.IgnoreButtonInput
// [0x00020002] 
struct APlayerController_execIgnoreButtonInput_Parms
{
	unsigned long                                      bNewButtonInput : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.PlayerController.IgnoreLookInput
// [0x00020002] 
struct APlayerController_execIgnoreLookInput_Parms
{
	unsigned long                                      bNewLookInput : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.PlayerController.IgnoreMoveInput
// [0x00020002] 
struct APlayerController_execIgnoreMoveInput_Parms
{
	unsigned long                                      bNewMoveInput : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.GameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
struct UGameViewportClient_eventPostRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WillowGame.WillowGameViewportClient.InputKey
// [0x00024002] 
struct UWillowGameViewportClient_execInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif

#endif
