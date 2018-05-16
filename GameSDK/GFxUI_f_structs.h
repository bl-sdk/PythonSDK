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
# Function Structs
# ========================================================================================= #
*/

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
struct UGFxFSCmdHandler_eventFSCommand_Parms
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxEvent_FSCommand*                         Event;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Cmd;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execCloseAllMoviePlayers_Parms
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifySplitscreenLayoutChanged_Parms
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyPlayerRemoved_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                RemovedPlayer;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyPlayerAdded_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                AddedPlayer;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyGameSessionEnded_Parms
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execGetFocusMovie_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxManager.GetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxManager_execGetFocusMovie_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxManager.LookupSound
// [0x00020802] ( FUNC_Event )
struct UGFxManager_eventLookupSound_Parms
{
	struct FName                                       UIEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxManager.ShowDialog
// [0x00020800] ( FUNC_Event )
struct UGFxManager_eventShowDialog_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UIDialogBox*                                 ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxManager.Init
// [0x00020802] ( FUNC_Event )
struct UGFxManager_eventInit_Parms
{
	class UGFxManagerDefinition*                       Def;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.UnregisterGFxObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execUnregisterGFxObject_Parms
{
	class UGFxObject*                                  anObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.RegisterGFxObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execRegisterGFxObject_Parms
{
	class UGFxObject*                                  anObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SendMousePos
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSendMousePos_Parms
{
};

// Function GFxUI.GFxMoviePlayer.IsShowingFlashMouse
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execIsShowingFlashMouse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.HookSaveScreenshot
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execHookSaveScreenshot_Parms
{
};

// Function GFxUI.GFxMoviePlayer.UpdateRenderTexture
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execUpdateRenderTexture_Parms
{
	class UTextureRenderTarget2D*                      NewRenderTexture;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.OnInputKey
// [0x00120000] 
struct UGFxMoviePlayer_execOnInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ukey;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      uevent;                                           		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.WantsInput
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execWantsInput_Parms
{
	struct FName                                       ukey;                                             		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.WantsControllerInput
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execWantsControllerInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.InputKey
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ukey;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      uevent;                                           		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetGFxManager
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetGFxManager_Parms
{
	class UGFxManager*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.ResolveDataStoreMarkup
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execResolveDataStoreMarkup_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execUpdateSplitscreenLayout_Parms
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] 
struct UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Parms
{
	unsigned long                                      bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] 
struct UGFxMoviePlayer_execApplyPriorityBlurEffect_Parms
{
	unsigned long                                      bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020802] ( FUNC_Event )
struct UGFxMoviePlayer_eventApplyPriorityEffect_Parms
{
	unsigned long                                      bRequestedBlurState : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bRequestedHiddenState : 1;                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024002] 
struct UGFxMoviePlayer_execPlaySoundFromTheme_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SoundThemeName;                                   		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnFocusLost_Parms
{
	int                                                LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnFocusGained_Parms
{
	int                                                LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020002] 
struct UGFxMoviePlayer_execConsoleCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.SetLP
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetLP_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetPC_Parms
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetLP_Parms
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] 
struct UGFxMoviePlayer_execInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetWidgetPathBinding_Parms
{
	class UGFxObject*                                  WidgetToBind;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Path;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventPostWidgetInit_Parms
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptFloat_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptInt_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptVoid_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.ActionScript
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScript_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execInvoke_Parms
{
	struct FString                                     Method;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FASValue >                          args;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0018 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptSetFunction_Parms
{
	class UGFxObject*                                  Object;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execCreateArray_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execCreateObject_Parms
{
	struct FString                                     ASClass;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableStringArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableFloatArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< float >                                    Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableIntArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FASValue >                          Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableStringArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableFloatArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< float >                                    Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableIntArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FASValue >                          Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Object;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableNumber_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariableBool_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B : 1;                                            		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetVariable_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x000C (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableNumber_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariableBool_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVariable_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x000C (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMoviePlayer.FilterAxisInput
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventFilterAxisInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delta;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execFlushPlayerInput_Parms
{
	unsigned long                                      capturekeysonly : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execClearFocusIgnoreKeys_Parms
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execAddFocusIgnoreKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execClearCaptureKeys_Parms
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execAddCaptureKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetMovieCanReceiveInput_Parms
{
	unsigned long                                      bCanReceiveInput : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetMovieCanReceiveFocus_Parms
{
	unsigned long                                      bCanReceiveFocus : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetSceneDPG
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetSceneDPG_Parms
{
	unsigned char                                      NewDPG;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetPerspective3D_Parms
{
	struct FMatrix                                     matPersp;                                         		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetView3D_Parms
{
	struct FMatrix                                     matView;                                          		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVisibleFrameRect_Parms
{
	float                                              x0;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              y0;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              X1;                                               		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetAlignment_Parms
{
	unsigned char                                      A;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetViewScaleMode_Parms
{
	unsigned char                                      SM;                                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.OnSetViewport
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnSetViewport_Parms
{
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetViewport_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetGameViewportClient_Parms
{
	class UGameViewportClient*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetPriority_Parms
{
	unsigned char                                      NewPriority;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execPublishDataStoreValues_Parms
{
};

// Function GFxUI.GFxMoviePlayer.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execRefreshDataStoreBindings_Parms
{
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetExternalTexture_Parms
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] 
struct UGFxMoviePlayer_execSetExternalInterface_Parms
{
	class UObject*                                     H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetTimingMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] 
struct UGFxMoviePlayer_execSetMovieInfo_Parms
{
	class USwfMovie*                                   Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGFxMoviePlayer_eventConditionalClearPause_Parms
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnCleanup_Parms
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnClose_Parms
{
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execClose_Parms
{
	unsigned long                                      Unload : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetPause_Parms
{
	unsigned long                                      bPausePlayback : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
struct UGFxMoviePlayer_execOnPostAdvance_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execPostAdvance_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execAdvance_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UGFxMoviePlayer_eventStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
struct UGFxObject_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] ( FUNC_Event )
struct UGFxObject_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.MouseHitTest
// [0x00020003] ( FUNC_Final )
struct UGFxObject_execMouseHitTest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.HitTest
// [0x00024003] ( FUNC_Final )
struct UGFxObject_execHitTest_Parms
{
	int                                                TestX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TestY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTestShape : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject._HitTest
// [0x00040003] ( FUNC_Final )
struct UGFxObject_exec_HitTest_Parms
{
	int                                                TestX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TestY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTestShape : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetNextHighestDepth
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetNextHighestDepth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.RemoveMovieClip
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execRemoveMovieClip_Parms
{
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execAttachMovie_Parms
{
	struct FString                                     symbolname;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     instancename;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      Type;                                             		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execCreateEmptyMovieClip_Parms
{
	struct FString                                     instancename;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndStopI_Parms
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndStop_Parms
{
	struct FString                                     frame;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndPlayI_Parms
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndPlay_Parms
{
	struct FString                                     frame;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptString_Parms
{
	struct FString                                     Method;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptFloat_Parms
{
	struct FString                                     Method;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptInt_Parms
{
	struct FString                                     Method;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptVoid_Parms
{
	struct FString                                     Method;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execInvoke_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FASValue >                          args;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0018 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptSetFunctionOn_Parms
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptSetFunction_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberFloat_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B : 1;                                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  val;                                              		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMember_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x0010 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberFloat_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMember_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0010 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementColorTransform_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASColorTransform                           cxform;                                           		// 0x0004 (0x0020) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementPosition_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementVisible_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Visible : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementDisplayMatrix_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMatrix                                     M;                                                		// 0x0010 (0x0040) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementDisplayInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASDisplayInfo                              D;                                                		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementDisplayMatrix_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMatrix                                     ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementDisplayInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASDisplayInfo                              ReturnValue;                                      		// 0x0004 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     S;                                                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementFloat_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              F;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  val;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElement_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASValue                                    Arg;                                              		// 0x0004 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementFloat_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElement_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASValue                                    ReturnValue;                                      		// 0x0004 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	class UTranslationContext*                         InContext;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetVisible_Parms
{
	unsigned long                                      Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetDisplayMatrix3D_Parms
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetDisplayMatrix_Parms
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetColorTransform_Parms
{
	struct FASColorTransform                           cxform;                                           		// 0x0000 (0x0020) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetPosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetDisplayInfo_Parms
{
	struct FASDisplayInfo                              D;                                                		// 0x0000 (0x002C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetDisplayMatrix_Parms
{
	struct FMatrix                                     ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetColorTransform_Parms
{
	struct FASColorTransform                           ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetPosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetDisplayInfo_Parms
{
	struct FASDisplayInfo                              D;                                                		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026400] ( FUNC_Native )
struct UGFxObject_execTranslateString_Parms
{
	struct FString                                     StringToTranslate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTranslationContext*                         InContext;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetFunction_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Context;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       fname;                                            		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetObject_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  val;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetString_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTranslationContext*                         InContext;                                        		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetFloat_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetBool_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B : 1;                                            		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxObject.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSet_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x000C (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetObject_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetString_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetFloat_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetBool_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxObject.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGet_Parms
{
	struct FString                                     Member;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x000C (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execASRemoveAllEventListeners_Parms
{
	struct FString                                     Event;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execASAddEventListener_Parms
{
	struct FString                                     Type;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  O;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     func;                                             		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execSetListener_Parms
{
	class UGFxObject*                                  O;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             Listener;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execGetEventStringFromTypename_Parms
{
	struct FName                                       Typename;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  TypeString;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020002] 
struct UGFxClikWidget_execRemoveAllEventListeners_Parms
{
	struct FString                                     Event;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00020002] 
struct UGFxClikWidget_execAddEventListener_Parms
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             Listener;                                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  TypeString;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
struct UGFxClikWidget_execEventListener_Parms
{
	struct FEventData                                  Data;                                             		// 0x0000 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.SwfMovie.GetPathForLoadMovie
// [0x00020400] ( FUNC_Native )
struct USwfMovie_execGetPathForLoadMovie_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Parms
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxEvent_FSCommand*                         Event;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Cmd;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
struct UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execClearBoundDataStores_Parms
{
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execPublishValues_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif