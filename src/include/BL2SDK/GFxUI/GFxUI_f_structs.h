#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GFxUI.GFxFSCmdHandler.FSCommand
struct UGFxFSCmdHandler_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                    // (Parm)
	class UGFxEvent_FSCommand*                         Event;                                                    // (Parm)
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                      // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
struct UGFxInteraction_CloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
struct UGFxInteraction_NotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
struct UGFxInteraction_NotifyPlayerRemoved_Params
{
	int                                                PlayerIndex;                                              // (Parm)
	class ULocalPlayer*                                RemovedPlayer;                                            // (Parm)
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
struct UGFxInteraction_NotifyPlayerAdded_Params
{
	int                                                PlayerIndex;                                              // (Parm)
	class ULocalPlayer*                                AddedPlayer;                                              // (Parm)
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
struct UGFxInteraction_NotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
struct UGFxInteraction_GetFocusMovie_Params
{
	int                                                ControllerId;                                             // (Parm)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxManager.GetFocusMovie
struct UGFxManager_GetFocusMovie_Params
{
	int                                                ControllerId;                                             // (Parm)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxManager.LookupSound
struct UGFxManager_LookupSound_Params
{
	struct FName                                       UIEvent;                                                  // (Parm)
	class UAkEvent*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxManager.ShowDialog
struct UGFxManager_ShowDialog_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	FScriptInterface                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxManager.Init
struct UGFxManager_Init_Params
{
	class UGFxManagerDefinition*                       Def;                                                      // (Parm)
};

// Function GFxUI.GFxMoviePlayer.UnregisterGFxObject
struct UGFxMoviePlayer_UnregisterGFxObject_Params
{
	class UGFxObject*                                  anObject;                                                 // (Parm)
};

// Function GFxUI.GFxMoviePlayer.RegisterGFxObject
struct UGFxMoviePlayer_RegisterGFxObject_Params
{
	class UGFxObject*                                  anObject;                                                 // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SendMousePos
struct UGFxMoviePlayer_SendMousePos_Params
{
};

// Function GFxUI.GFxMoviePlayer.IsShowingFlashMouse
struct UGFxMoviePlayer_IsShowingFlashMouse_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.HookSaveScreenshot
struct UGFxMoviePlayer_HookSaveScreenshot_Params
{
};

// Function GFxUI.GFxMoviePlayer.UpdateRenderTexture
struct UGFxMoviePlayer_UpdateRenderTexture_Params
{
	class UTextureRenderTarget2D*                      NewRenderTexture;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.OnInputKey
struct UGFxMoviePlayer_OnInputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ukey;                                                     // (Parm)
	unsigned char                                      uevent;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WantsInput
struct UGFxMoviePlayer_WantsInput_Params
{
	struct FName                                       ukey;                                                     // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WantsControllerInput
struct UGFxMoviePlayer_WantsControllerInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.InputKey
struct UGFxMoviePlayer_InputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ukey;                                                     // (Parm)
	unsigned char                                      uevent;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetGFxManager
struct UGFxMoviePlayer_GetGFxManager_Params
{
	class UGFxManager*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ResolveDataStoreMarkup
struct UGFxMoviePlayer_ResolveDataStoreMarkup_Params
{
	struct FString                                     Markup;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
struct UGFxMoviePlayer_UpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
struct UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params
{
	unsigned long                                      bRemoveEffect : 1;                                            // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
struct UGFxMoviePlayer_ApplyPriorityBlurEffect_Params
{
	unsigned long                                      bRemoveEffect : 1;                                            // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
struct UGFxMoviePlayer_ApplyPriorityEffect_Params
{
	unsigned long                                      bRequestedBlurState : 1;                                      // (Parm)
	unsigned long                                      bRequestedHiddenState : 1;                                    // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
struct UGFxMoviePlayer_PlaySoundFromTheme_Params
{
	struct FName                                       EventName;                                                // (Parm)
	struct FName                                       SoundThemeName;                                           // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
	int                                                LocalPlayerIndex;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
	int                                                LocalPlayerIndex;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
struct UGFxMoviePlayer_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetLP
struct UGFxMoviePlayer_SetLP_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (Parm)
};

// Function GFxUI.GFxMoviePlayer.GetPC
struct UGFxMoviePlayer_GetPC_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetLP
struct UGFxMoviePlayer_GetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.Init
struct UGFxMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
struct UGFxMoviePlayer_SetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                             // (Parm)
	struct FName                                       Path;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
struct UGFxMoviePlayer_PostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
struct UGFxMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
struct UGFxMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
struct UGFxMoviePlayer_ActionScriptObject_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
struct UGFxMoviePlayer_ActionScriptString_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
struct UGFxMoviePlayer_ActionScriptFloat_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
struct UGFxMoviePlayer_ActionScriptInt_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
struct UGFxMoviePlayer_ActionScriptVoid_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScript
struct UGFxMoviePlayer_ActionScript_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.Invoke
struct UGFxMoviePlayer_Invoke_Params
{
	struct FString                                     Method;                                                   // (Parm, NeedCtorLink)
	TArray<struct FASValue>                            args;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
struct UGFxMoviePlayer_ActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                                   // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.CreateArray
struct UGFxMoviePlayer_CreateArray_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.CreateObject
struct UGFxMoviePlayer_CreateObject_Params
{
	struct FString                                     ASClass;                                                  // (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
struct UGFxMoviePlayer_SetVariableStringArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FString>                             Arg;                                                      // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
struct UGFxMoviePlayer_SetVariableFloatArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<float>                                      Arg;                                                      // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
struct UGFxMoviePlayer_SetVariableIntArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<int>                                        Arg;                                                      // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
struct UGFxMoviePlayer_SetVariableArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FASValue>                            Arg;                                                      // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
struct UGFxMoviePlayer_GetVariableStringArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FString>                             Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
struct UGFxMoviePlayer_GetVariableFloatArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<float>                                      Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
struct UGFxMoviePlayer_GetVariableIntArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<int>                                        Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
struct UGFxMoviePlayer_GetVariableArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FASValue>                            Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
struct UGFxMoviePlayer_SetVariableObject_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  Object;                                                   // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
struct UGFxMoviePlayer_SetVariableString_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
struct UGFxMoviePlayer_SetVariableNumber_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
struct UGFxMoviePlayer_SetVariableBool_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	unsigned long                                      B : 1;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariable
struct UGFxMoviePlayer_SetVariable_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
struct UGFxMoviePlayer_GetVariableObject_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
struct UGFxMoviePlayer_GetVariableString_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
struct UGFxMoviePlayer_GetVariableNumber_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
struct UGFxMoviePlayer_GetVariableBool_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariable
struct UGFxMoviePlayer_GetVariable_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.FilterAxisInput
struct UGFxMoviePlayer_FilterAxisInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	float                                              Delta;                                                    // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
struct UGFxMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	unsigned char                                      InputEvent;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
struct UGFxMoviePlayer_FlushPlayerInput_Params
{
	unsigned long                                      capturekeysonly : 1;                                          // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
struct UGFxMoviePlayer_ClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
struct UGFxMoviePlayer_AddFocusIgnoreKey_Params
{
	struct FName                                       Key;                                                      // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
struct UGFxMoviePlayer_ClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
struct UGFxMoviePlayer_AddCaptureKey_Params
{
	struct FName                                       Key;                                                      // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
	unsigned long                                      bCanReceiveInput : 1;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
	unsigned long                                      bCanReceiveFocus : 1;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetSceneDPG
struct UGFxMoviePlayer_SetSceneDPG_Params
{
	unsigned char                                      NewDPG;                                                   // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                                 // (Const, Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
	struct FMatrix                                     matView;                                                  // (Const, Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
struct UGFxMoviePlayer_GetVisibleFrameRect_Params
{
	float                                              x0;                                                       // (Parm, OutParm)
	float                                              y0;                                                       // (Parm, OutParm)
	float                                              X1;                                                       // (Parm, OutParm)
	float                                              Y1;                                                       // (Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
	unsigned char                                      A;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
	unsigned char                                      SM;                                                       // (Parm)
};

// Function GFxUI.GFxMoviePlayer.OnSetViewport
struct UGFxMoviePlayer_OnSetViewport_Params
{
};

// Function GFxUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
struct UGFxMoviePlayer_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
struct UGFxMoviePlayer_SetPriority_Params
{
	unsigned char                                      NewPriority;                                              // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PublishDataStoreValues
struct UGFxMoviePlayer_PublishDataStoreValues_Params
{
};

// Function GFxUI.GFxMoviePlayer.RefreshDataStoreBindings
struct UGFxMoviePlayer_RefreshDataStoreBindings_Params
{
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
	struct FString                                     Resource;                                                 // (Parm, NeedCtorLink)
	class UTexture*                                    Texture;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
struct UGFxMoviePlayer_SetExternalInterface_Params
{
	class UObject*                                     H;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
	unsigned char                                      Mode;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
struct UGFxMoviePlayer_SetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
struct UGFxMoviePlayer_ConditionalClearPause_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
struct UGFxMoviePlayer_OnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
struct UGFxMoviePlayer_OnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
struct UGFxMoviePlayer_Close_Params
{
	unsigned long                                      Unload : 1;                                                   // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
	unsigned long                                      bPausePlayback : 1;                                           // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
struct UGFxMoviePlayer_OnPostAdvance_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
struct UGFxMoviePlayer_PostAdvance_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GFxUI.GFxMoviePlayer.Advance
struct UGFxMoviePlayer_Advance_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.Start
struct UGFxMoviePlayer_Start_Params
{
	unsigned long                                      StartPaused : 1;                                              // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.WidgetUnloaded
struct UGFxObject_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
struct UGFxObject_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.MouseHitTest
struct UGFxObject_MouseHitTest_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.HitTest
struct UGFxObject_HitTest_Params
{
	int                                                TestX;                                                    // (Parm)
	int                                                TestY;                                                    // (Parm)
	unsigned long                                      bTestShape : 1;                                               // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject._HitTest
struct UGFxObject__HitTest_Params
{
	int                                                TestX;                                                    // (Parm)
	int                                                TestY;                                                    // (Parm)
	unsigned long                                      bTestShape : 1;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetNextHighestDepth
struct UGFxObject_GetNextHighestDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.RemoveMovieClip
struct UGFxObject_RemoveMovieClip_Params
{
};

// Function GFxUI.GFxObject.AttachMovie
struct UGFxObject_AttachMovie_Params
{
	struct FString                                     symbolname;                                               // (Parm, NeedCtorLink)
	struct FString                                     instancename;                                             // (Parm, NeedCtorLink)
	int                                                Depth;                                                    // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
struct UGFxObject_CreateEmptyMovieClip_Params
{
	struct FString                                     instancename;                                             // (Parm, NeedCtorLink)
	int                                                Depth;                                                    // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
	int                                                frame;                                                    // (Parm)
};

// Function GFxUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
	struct FString                                     frame;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
	int                                                frame;                                                    // (Parm)
};

// Function GFxUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
	struct FString                                     frame;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptArray
struct UGFxObject_ActionScriptArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	TArray<class UGFxObject*>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptObject
struct UGFxObject_ActionScriptObject_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptString
struct UGFxObject_ActionScriptString_Params
{
	struct FString                                     Method;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptFloat
struct UGFxObject_ActionScriptFloat_Params
{
	struct FString                                     Method;                                                   // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptInt
struct UGFxObject_ActionScriptInt_Params
{
	struct FString                                     Method;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptVoid
struct UGFxObject_ActionScriptVoid_Params
{
	struct FString                                     Method;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.Invoke
struct UGFxObject_Invoke_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	TArray<struct FASValue>                            args;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
struct UGFxObject_ActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                                   // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
struct UGFxObject_ActionScriptSetFunction_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberString
struct UGFxObject_SetElementMemberString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberFloat
struct UGFxObject_SetElementMemberFloat_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberBool
struct UGFxObject_SetElementMemberBool_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	unsigned long                                      B : 1;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberObject
struct UGFxObject_SetElementMemberObject_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UGFxObject*                                  val;                                                      // (Parm)
};

// Function GFxUI.GFxObject.SetElementMember
struct UGFxObject_SetElementMember_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberString
struct UGFxObject_GetElementMemberString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberFloat
struct UGFxObject_GetElementMemberFloat_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberBool
struct UGFxObject_GetElementMemberBool_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObject
struct UGFxObject_GetElementMemberObject_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMember
struct UGFxObject_GetElementMember_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementColorTransform
struct UGFxObject_SetElementColorTransform_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASColorTransform                           cxform;                                                   // (Parm)
};

// Function GFxUI.GFxObject.SetElementPosition
struct UGFxObject_SetElementPosition_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementVisible
struct UGFxObject_SetElementVisible_Params
{
	int                                                Index;                                                    // (Parm)
	unsigned long                                      Visible : 1;                                                  // (Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
struct UGFxObject_SetElementDisplayMatrix_Params
{
	int                                                Index;                                                    // (Parm)
	struct FMatrix                                     M;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
struct UGFxObject_SetElementDisplayInfo_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASDisplayInfo                              D;                                                        // (Parm)
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
struct UGFxObject_GetElementDisplayMatrix_Params
{
	int                                                Index;                                                    // (Parm)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
struct UGFxObject_GetElementDisplayInfo_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASDisplayInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.SetElementString
struct UGFxObject_SetElementString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementFloat
struct UGFxObject_SetElementFloat_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementBool
struct UGFxObject_SetElementBool_Params
{
	int                                                Index;                                                    // (Parm)
	unsigned long                                      B : 1;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementObject
struct UGFxObject_SetElementObject_Params
{
	int                                                Index;                                                    // (Parm)
	class UGFxObject*                                  val;                                                      // (Parm)
};

// Function GFxUI.GFxObject.SetElement
struct UGFxObject_SetElement_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementString
struct UGFxObject_GetElementString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementFloat
struct UGFxObject_GetElementFloat_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
struct UGFxObject_GetElementBool_Params
{
	int                                                Index;                                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
struct UGFxObject_GetElementObject_Params
{
	int                                                Index;                                                    // (Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
struct UGFxObject_GetElement_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetText
struct UGFxObject_SetText_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (OptionalParm, Parm)
};

// Function GFxUI.GFxObject.GetText
struct UGFxObject_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
	unsigned long                                      Visible : 1;                                                  // (Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
struct UGFxObject_SetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix
struct UGFxObject_SetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                                   // (Parm)
};

// Function GFxUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                        // (Const, Parm, OutParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix
struct UGFxObject_GetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
	float                                              X;                                                        // (Parm, OutParm)
	float                                              Y;                                                        // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                        // (Parm, OutParm)
};

// Function GFxUI.GFxObject.TranslateString
struct UGFxObject_TranslateString_Params
{
	struct FString                                     StringToTranslate;                                        // (Parm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetFunction
struct UGFxObject_SetFunction_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UObject*                                     Context;                                                  // (Parm)
	struct FName                                       fname;                                                    // (Parm)
};

// Function GFxUI.GFxObject.SetObject
struct UGFxObject_SetObject_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UGFxObject*                                  val;                                                      // (Parm)
};

// Function GFxUI.GFxObject.SetString
struct UGFxObject_SetString_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (OptionalParm, Parm)
};

// Function GFxUI.GFxObject.SetFloat
struct UGFxObject_SetFloat_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetBool
struct UGFxObject_SetBool_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	unsigned long                                      B : 1;                                                        // (Parm)
};

// Function GFxUI.GFxObject.Set
struct UGFxObject_Set_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetObject
struct UGFxObject_GetObject_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetString
struct UGFxObject_GetString_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetFloat
struct UGFxObject_GetFloat_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetBool
struct UGFxObject_GetBool_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.Get
struct UGFxObject_Get_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
struct UGFxClikWidget_ASRemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
struct UGFxClikWidget_ASAddEventListener_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     func;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
struct UGFxClikWidget_SetListener_Params
{
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Listener;                                                 // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
struct UGFxClikWidget_GetEventStringFromTypename_Params
{
	struct FName                                       Typename;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
struct UGFxClikWidget_RemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
struct UGFxClikWidget_AddEventListener_Params
{
	struct FName                                       Type;                                                     // (Parm)
	struct FScriptDelegate                             Listener;                                                 // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.EventListener
struct UGFxClikWidget_EventListener_Params
{
	struct FEventData                                  Data;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.SwfMovie.GetPathForLoadMovie
struct USwfMovie_GetPathForLoadMovie_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
struct UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
struct UGFxAction_GetVariable_IsValidLevelSequenceObject_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
struct UGFxAction_Invoke_IsValidLevelSequenceObject_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
struct UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
struct UGFxAction_SetVariable_IsValidLevelSequenceObject_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
struct UGFxFSCmdHandler_Kismet_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                    // (Parm)
	class UGFxEvent_FSCommand*                         Event;                                                    // (Parm)
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                      // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
struct UGFxDataStoreSubscriber_SaveSubscriberValue_Params
{
	TArray<class UUIDataStore*>                        out_BoundDataStores;                                      // (Parm, OutParm, NeedCtorLink)
	int                                                BindingIndex;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
struct UGFxDataStoreSubscriber_ClearBoundDataStores_Params
{
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
struct UGFxDataStoreSubscriber_GetBoundDataStores_Params
{
	TArray<class UUIDataStore*>                        out_BoundDataStores;                                      // (Parm, OutParm, NeedCtorLink)
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
struct UGFxDataStoreSubscriber_NotifyDataStoreValueUpdated_Params
{
	class UUIDataStore*                                SourceDataStore;                                          // (Parm)
	unsigned long                                      bValuesInvalidated : 1;                                       // (Parm)
	struct FName                                       PropertyTag;                                              // (Parm)
	class UUIDataProvider*                             SourceProvider;                                           // (Parm)
	int                                                ArrayIndex;                                               // (Parm)
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
struct UGFxDataStoreSubscriber_RefreshSubscriberValue_Params
{
	int                                                BindingIndex;                                             // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
struct UGFxDataStoreSubscriber_GetDataStoreBinding_Params
{
	int                                                BindingIndex;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
struct UGFxDataStoreSubscriber_SetDataStoreBinding_Params
{
	struct FString                                     MarkupText;                                               // (Parm, NeedCtorLink)
	int                                                BindingIndex;                                             // (OptionalParm, Parm)
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
struct UGFxDataStoreSubscriber_PublishValues_Params
{
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
