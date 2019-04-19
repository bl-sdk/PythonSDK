// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GFxUI.GFxFSCmdHandler.FSCommand
// (Event, Public)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (Parm)
// class UGFxEvent_FSCommand*     Event                          (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxFSCmdHandler::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxFSCmdHandler.FSCommand");

	UGFxFSCmdHandler_FSCommand_Params params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// (Native, Public)

void UGFxInteraction::CloseAllMoviePlayers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxInteraction.CloseAllMoviePlayers");

	UGFxInteraction_CloseAllMoviePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// (Native, Public)

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");

	UGFxInteraction_NotifySplitscreenLayoutChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// (Native, Public)
// Parameters:
// int                            PlayerIndex                    (Parm)
// class ULocalPlayer*            RemovedPlayer                  (Parm)

void UGFxInteraction::NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxInteraction.NotifyPlayerRemoved");

	UGFxInteraction_NotifyPlayerRemoved_Params params;
	params.PlayerIndex = PlayerIndex;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// (Native, Public)
// Parameters:
// int                            PlayerIndex                    (Parm)
// class ULocalPlayer*            AddedPlayer                    (Parm)

void UGFxInteraction::NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxInteraction.NotifyPlayerAdded");

	UGFxInteraction_NotifyPlayerAdded_Params params;
	params.PlayerIndex = PlayerIndex;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// (Native, Public)

void UGFxInteraction::NotifyGameSessionEnded()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxInteraction.NotifyGameSessionEnded");

	UGFxInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.GetFocusMovie
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// class UGFxMoviePlayer*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxInteraction.GetFocusMovie");

	UGFxInteraction_GetFocusMovie_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxManager.GetFocusMovie
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// class UGFxMoviePlayer*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxMoviePlayer* UGFxManager::GetFocusMovie(int ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxManager.GetFocusMovie");

	UGFxManager_GetFocusMovie_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxManager.LookupSound
// (Defined, Event, Public)
// Parameters:
// struct FName                   UIEvent                        (Parm)
// class UAkEvent*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UAkEvent* UGFxManager::LookupSound(const struct FName& UIEvent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxManager.LookupSound");

	UGFxManager_LookupSound_Params params;
	params.UIEvent = UIEvent;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxManager.ShowDialog
// (Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface UGFxManager::ShowDialog(class APlayerController* PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxManager.ShowDialog");

	UGFxManager_ShowDialog_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxManager.Init
// (Defined, Event, Public)
// Parameters:
// class UGFxManagerDefinition*   Def                            (Parm)

void UGFxManager::Init(class UGFxManagerDefinition* Def)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxManager.Init");

	UGFxManager_Init_Params params;
	params.Def = Def;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.UnregisterGFxObject
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              anObject                       (Parm)

void UGFxMoviePlayer::UnregisterGFxObject(class UGFxObject* anObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.UnregisterGFxObject");

	UGFxMoviePlayer_UnregisterGFxObject_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.RegisterGFxObject
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              anObject                       (Parm)

void UGFxMoviePlayer::RegisterGFxObject(class UGFxObject* anObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.RegisterGFxObject");

	UGFxMoviePlayer_RegisterGFxObject_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SendMousePos
// (Final, Native, Public)

void UGFxMoviePlayer::SendMousePos()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SendMousePos");

	UGFxMoviePlayer_SendMousePos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.IsShowingFlashMouse
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::IsShowingFlashMouse()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.IsShowingFlashMouse");

	UGFxMoviePlayer_IsShowingFlashMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.HookSaveScreenshot
// (Final, Native, Public)

void UGFxMoviePlayer::HookSaveScreenshot()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.HookSaveScreenshot");

	UGFxMoviePlayer_HookSaveScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.UpdateRenderTexture
// (Final, Native, Public)
// Parameters:
// class UTextureRenderTarget2D*  NewRenderTexture               (Parm)

void UGFxMoviePlayer::UpdateRenderTexture(class UTextureRenderTarget2D* NewRenderTexture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.UpdateRenderTexture");

	UGFxMoviePlayer_UpdateRenderTexture_Params params;
	params.NewRenderTexture = NewRenderTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnInputKey
// (Public, Delegate)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ukey                           (Parm)
// unsigned char                  uevent                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::OnInputKey(int ControllerId, const struct FName& ukey, unsigned char uevent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnInputKey");

	UGFxMoviePlayer_OnInputKey_Params params;
	params.ControllerId = ControllerId;
	params.ukey = ukey;
	params.uevent = uevent;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.WantsInput
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FName                   ukey                           (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WantsInput(const struct FName& ukey)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.WantsInput");

	UGFxMoviePlayer_WantsInput_Params params;
	params.ukey = ukey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.WantsControllerInput
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WantsControllerInput(int ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.WantsControllerInput");

	UGFxMoviePlayer_WantsControllerInput_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.InputKey
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ukey                           (Parm)
// unsigned char                  uevent                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::InputKey(int ControllerId, const struct FName& ukey, unsigned char uevent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.InputKey");

	UGFxMoviePlayer_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.ukey = ukey;
	params.uevent = uevent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetGFxManager
// (Final, Native, Static, Public)
// Parameters:
// class UGFxManager*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxManager* UGFxMoviePlayer::GetGFxManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetGFxManager");

	UGFxMoviePlayer_GetGFxManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ResolveDataStoreMarkup
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Markup                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::ResolveDataStoreMarkup(const struct FString& Markup)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ResolveDataStoreMarkup");

	UGFxMoviePlayer_ResolveDataStoreMarkup_Params params;
	params.Markup = Markup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// (Final, Native, Public)

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");

	UGFxMoviePlayer_UpdateSplitscreenLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// (Public)
// Parameters:
// bool                           bRemoveEffect                  (Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");

	UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// (Public)
// Parameters:
// bool                           bRemoveEffect                  (Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");

	UGFxMoviePlayer_ApplyPriorityBlurEffect_Params params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// (Defined, Event, Public)
// Parameters:
// bool                           bRequestedBlurState            (Parm)
// bool                           bRequestedHiddenState          (Parm)

void UGFxMoviePlayer::ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ApplyPriorityEffect");

	UGFxMoviePlayer_ApplyPriorityEffect_Params params;
	params.bRequestedBlurState = bRequestedBlurState;
	params.bRequestedHiddenState = bRequestedHiddenState;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// (Defined, HasOptionalparams, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// struct FName                   SoundThemeName                 (OptionalParm, Parm)

void UGFxMoviePlayer::PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.PlaySoundFromTheme");

	UGFxMoviePlayer_PlaySoundFromTheme_Params params;
	params.EventName = EventName;
	params.SoundThemeName = SoundThemeName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusLost
// (Event, Public)
// Parameters:
// int                            LocalPlayerIndex               (Parm)

void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnFocusLost");

	UGFxMoviePlayer_OnFocusLost_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusGained
// (Event, Public)
// Parameters:
// int                            LocalPlayerIndex               (Parm)

void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnFocusGained");

	UGFxMoviePlayer_OnFocusGained_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// (Defined, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UGFxMoviePlayer::ConsoleCommand(const struct FString& Command)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ConsoleCommand");

	UGFxMoviePlayer_ConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetLP
// (Final, Native, Public)
// Parameters:
// class ULocalPlayer*            LocPlay                        (Parm)

void UGFxMoviePlayer::SetLP(class ULocalPlayer* LocPlay)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetLP");

	UGFxMoviePlayer_SetLP_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetPC
// (Final, Native, Public)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* UGFxMoviePlayer::GetPC()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetPC");

	UGFxMoviePlayer_GetPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetLP
// (Final, Native, Public)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::GetLP()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetLP");

	UGFxMoviePlayer_GetLP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.Init
// (Defined, HasOptionalparams, Public)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.Init");

	UGFxMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              WidgetToBind                   (Parm)
// struct FName                   Path                           (Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetWidgetPathBinding");

	UGFxMoviePlayer_SetWidgetPathBinding_Params params;
	params.WidgetToBind = WidgetToBind;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// (Event, Public)

void UGFxMoviePlayer::PostWidgetInit()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.PostWidgetInit");

	UGFxMoviePlayer_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// (Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.WidgetUnloaded");

	UGFxMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// (Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.WidgetInitialized");

	UGFxMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScriptObject");

	UGFxMoviePlayer_ActionScriptObject_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptString
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::ActionScriptString(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScriptString");

	UGFxMoviePlayer_ActionScriptString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxMoviePlayer::ActionScriptFloat(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScriptFloat");

	UGFxMoviePlayer_ActionScriptFloat_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::ActionScriptInt(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScriptInt");

	UGFxMoviePlayer_ActionScriptInt_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScriptVoid");

	UGFxMoviePlayer_ActionScriptVoid_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ActionScript
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)

void UGFxMoviePlayer::ActionScript(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScript");

	UGFxMoviePlayer_ActionScript_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Invoke
// (Native, Public)
// Parameters:
// struct FString                 Method                         (Parm, NeedCtorLink)
// TArray<struct FASValue>        args                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(const struct FString& Method, TArray<struct FASValue> args)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.Invoke");

	UGFxMoviePlayer_Invoke_Params params;
	params.Method = Method;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// (Final, Native, Protected)
// Parameters:
// class UGFxObject*              Object                         (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ActionScriptSetFunction");

	UGFxMoviePlayer_ActionScriptSetFunction_Params params;
	params.Object = Object;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.CreateArray
// (Final, Native, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.CreateArray");

	UGFxMoviePlayer_CreateArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.CreateObject
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 ASClass                        (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateObject(const struct FString& ASClass, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.CreateObject");

	UGFxMoviePlayer_CreateObject_Params params;
	params.ASClass = ASClass;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FString>         Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableStringArray");

	UGFxMoviePlayer_SetVariableStringArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<float>                  Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableFloatArray");

	UGFxMoviePlayer_SetVariableFloatArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<int>                    Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableIntArray");

	UGFxMoviePlayer_SetVariableIntArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableArray
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FASValue>        Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableArray");

	UGFxMoviePlayer_SetVariableArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FString>         Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableStringArray");

	UGFxMoviePlayer_GetVariableStringArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<float>                  Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableFloatArray");

	UGFxMoviePlayer_GetVariableFloatArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<int>                    Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableIntArray");

	UGFxMoviePlayer_GetVariableIntArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableArray
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FASValue>        Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableArray");

	UGFxMoviePlayer_GetVariableArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableObject
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              Object                         (Parm)

void UGFxMoviePlayer::SetVariableObject(const struct FString& Path, class UGFxObject* Object)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableObject");

	UGFxMoviePlayer_SetVariableObject_Params params;
	params.Path = Path;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableString
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(const struct FString& Path, const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableString");

	UGFxMoviePlayer_SetVariableString_Params params;
	params.Path = Path;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxMoviePlayer::SetVariableNumber(const struct FString& Path, float F)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableNumber");

	UGFxMoviePlayer_SetVariableNumber_Params params;
	params.Path = Path;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableBool
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxMoviePlayer::SetVariableBool(const struct FString& Path, bool B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariableBool");

	UGFxMoviePlayer_SetVariableBool_Params params;
	params.Path = Path;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariable
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxMoviePlayer::SetVariable(const struct FString& Path, const struct FASValue& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetVariable");

	UGFxMoviePlayer_SetVariable_Params params;
	params.Path = Path;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableObject
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(const struct FString& Path, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableObject");

	UGFxMoviePlayer_GetVariableObject_Params params;
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableString
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::GetVariableString(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableString");

	UGFxMoviePlayer_GetVariableString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxMoviePlayer::GetVariableNumber(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableNumber");

	UGFxMoviePlayer_GetVariableNumber_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableBool
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::GetVariableBool(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariableBool");

	UGFxMoviePlayer_GetVariableBool_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariable
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVariable");

	UGFxMoviePlayer_GetVariable_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FilterAxisInput
// (Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// float                          Delta                          (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::FilterAxisInput(int ControllerId, const struct FName& Key, float Delta, float DeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.FilterAxisInput");

	UGFxMoviePlayer_FilterAxisInput_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// (Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// unsigned char                  InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, unsigned char InputEvent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.FilterButtonInput");

	UGFxMoviePlayer_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// (Final, Native, Public)
// Parameters:
// bool                           capturekeysonly                (Parm)

void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.FlushPlayerInput");

	UGFxMoviePlayer_FlushPlayerInput_Params params;
	params.capturekeysonly = capturekeysonly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// (Final, Native, Public)

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");

	UGFxMoviePlayer_ClearFocusIgnoreKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(const struct FName& Key)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");

	UGFxMoviePlayer_AddFocusIgnoreKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// (Final, Native, Public)

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ClearCaptureKeys");

	UGFxMoviePlayer_ClearCaptureKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)

void UGFxMoviePlayer::AddCaptureKey(const struct FName& Key)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.AddCaptureKey");

	UGFxMoviePlayer_AddCaptureKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Final, Native, Public)
// Parameters:
// bool                           bCanReceiveInput               (Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params;
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Final, Native, Public)
// Parameters:
// bool                           bCanReceiveFocus               (Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params;
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetSceneDPG
// (Final, Native, Public)
// Parameters:
// unsigned char                  NewDPG                         (Parm)

void UGFxMoviePlayer::SetSceneDPG(unsigned char NewDPG)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetSceneDPG");

	UGFxMoviePlayer_SetSceneDPG_Params params;
	params.NewDPG = NewDPG;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FMatrix                 matPersp                       (Const, Parm, OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix* matPersp)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetPerspective3D");

	UGFxMoviePlayer_SetPerspective3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matPersp != nullptr)
		*matPersp = params.matPersp;
}


// Function GFxUI.GFxMoviePlayer.SetView3D
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FMatrix                 matView                        (Const, Parm, OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix* matView)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetView3D");

	UGFxMoviePlayer_SetView3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matView != nullptr)
		*matView = params.matView;
}


// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// (Final, Native, Public, HasOutparams)
// Parameters:
// float                          x0                             (Parm, OutParm)
// float                          y0                             (Parm, OutParm)
// float                          X1                             (Parm, OutParm)
// float                          Y1                             (Parm, OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetVisibleFrameRect");

	UGFxMoviePlayer_GetVisibleFrameRect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (x0 != nullptr)
		*x0 = params.x0;
	if (y0 != nullptr)
		*y0 = params.y0;
	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;
}


// Function GFxUI.GFxMoviePlayer.SetAlignment
// (Final, Native, Public)
// Parameters:
// unsigned char                  A                              (Parm)

void UGFxMoviePlayer::SetAlignment(unsigned char A)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetAlignment");

	UGFxMoviePlayer_SetAlignment_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// (Native, Public)
// Parameters:
// unsigned char                  SM                             (Parm)

void UGFxMoviePlayer::SetViewScaleMode(unsigned char SM)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetViewScaleMode");

	UGFxMoviePlayer_SetViewScaleMode_Params params;
	params.SM = SM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnSetViewport
// (Event, Public)

void UGFxMoviePlayer::OnSetViewport()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnSetViewport");

	UGFxMoviePlayer_OnSetViewport_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewport
// (Final, Native, Public)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            Width                          (Parm)
// int                            Height                         (Parm)

void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetViewport");

	UGFxMoviePlayer_SetViewport_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// (Final, Native, Public)
// Parameters:
// class UGameViewportClient*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.GetGameViewportClient");

	UGFxMoviePlayer_GetGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetPriority
// (Native, Public)
// Parameters:
// unsigned char                  NewPriority                    (Parm)

void UGFxMoviePlayer::SetPriority(unsigned char NewPriority)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetPriority");

	UGFxMoviePlayer_SetPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PublishDataStoreValues
// (Native, Public)

void UGFxMoviePlayer::PublishDataStoreValues()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.PublishDataStoreValues");

	UGFxMoviePlayer_PublishDataStoreValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.RefreshDataStoreBindings
// (Native, Public)

void UGFxMoviePlayer::RefreshDataStoreBindings()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.RefreshDataStoreBindings");

	UGFxMoviePlayer_RefreshDataStoreBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// (Native, Public)
// Parameters:
// struct FString                 Resource                       (Parm, NeedCtorLink)
// class UTexture*                Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetExternalTexture");

	UGFxMoviePlayer_SetExternalTexture_Params params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// (Defined, Public)
// Parameters:
// class UObject*                 H                              (Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetExternalInterface");

	UGFxMoviePlayer_SetExternalInterface_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetTimingMode
// (Native, Public)
// Parameters:
// unsigned char                  Mode                           (Parm)

void UGFxMoviePlayer::SetTimingMode(unsigned char Mode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetTimingMode");

	UGFxMoviePlayer_SetTimingMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// (Defined, Public)
// Parameters:
// class USwfMovie*               Data                           (Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetMovieInfo");

	UGFxMoviePlayer_SetMovieInfo_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// (Final, Defined, Event, Public)

void UGFxMoviePlayer::ConditionalClearPause()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.ConditionalClearPause");

	UGFxMoviePlayer_ConditionalClearPause_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnCleanup
// (Event, Public)

void UGFxMoviePlayer::OnCleanup()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnCleanup");

	UGFxMoviePlayer_OnCleanup_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnClose
// (Event, Public)

void UGFxMoviePlayer::OnClose()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnClose");

	UGFxMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Close
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// bool                           Unload                         (OptionalParm, Parm)

void UGFxMoviePlayer::Close(bool Unload)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.Close");

	UGFxMoviePlayer_Close_Params params;
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPause
// (Native, HasOptionalparams, Public)
// Parameters:
// bool                           bPausePlayback                 (OptionalParm, Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.SetPause");

	UGFxMoviePlayer_SetPause_Params params;
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// (Public, Delegate)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.OnPostAdvance");

	UGFxMoviePlayer_OnPostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostAdvance
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.PostAdvance");

	UGFxMoviePlayer_PostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Advance
// (Final, Native, Public)
// Parameters:
// float                          Time                           (Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.Advance");

	UGFxMoviePlayer_Advance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Start
// (Native, Event, HasOptionalparams, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::Start(bool StartPaused)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxMoviePlayer.Start");

	UGFxMoviePlayer_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.WidgetUnloaded
// (Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.WidgetUnloaded");

	UGFxObject_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.WidgetInitialized
// (Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.WidgetInitialized");

	UGFxObject_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.MouseHitTest
// (Final, Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::MouseHitTest()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.MouseHitTest");

	UGFxObject_MouseHitTest_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.HitTest
// (Final, Defined, HasOptionalparams, Public)
// Parameters:
// int                            TestX                          (Parm)
// int                            TestY                          (Parm)
// bool                           bTestShape                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::HitTest(int TestX, int TestY, bool bTestShape)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.HitTest");

	UGFxObject_HitTest_Params params;
	params.TestX = TestX;
	params.TestY = TestY;
	params.bTestShape = bTestShape;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject._HitTest
// (Final, Defined, Private)
// Parameters:
// int                            TestX                          (Parm)
// int                            TestY                          (Parm)
// bool                           bTestShape                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::_HitTest(int TestX, int TestY, bool bTestShape)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject._HitTest");

	UGFxObject__HitTest_Params params;
	params.TestX = TestX;
	params.TestY = TestY;
	params.bTestShape = bTestShape;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetNextHighestDepth
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetNextHighestDepth()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetNextHighestDepth");

	UGFxObject_GetNextHighestDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.RemoveMovieClip
// (Final, Native, Public)

void UGFxObject::RemoveMovieClip()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.RemoveMovieClip");

	UGFxObject_RemoveMovieClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.AttachMovie
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 symbolname                     (Parm, NeedCtorLink)
// struct FString                 instancename                   (Parm, NeedCtorLink)
// int                            Depth                          (OptionalParm, Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.AttachMovie");

	UGFxObject_AttachMovie_Params params;
	params.symbolname = symbolname;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.CreateEmptyMovieClip
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 instancename                   (Parm, NeedCtorLink)
// int                            Depth                          (OptionalParm, Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.CreateEmptyMovieClip");

	UGFxObject_CreateEmptyMovieClip_Params params;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GotoAndStopI
// (Final, Native, Public)
// Parameters:
// int                            frame                          (Parm)

void UGFxObject::GotoAndStopI(int frame)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GotoAndStopI");

	UGFxObject_GotoAndStopI_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndStop
// (Final, Native, Public)
// Parameters:
// struct FString                 frame                          (Parm, NeedCtorLink)

void UGFxObject::GotoAndStop(const struct FString& frame)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GotoAndStop");

	UGFxObject_GotoAndStop_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlayI
// (Final, Native, Public)
// Parameters:
// int                            frame                          (Parm)

void UGFxObject::GotoAndPlayI(int frame)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GotoAndPlayI");

	UGFxObject_GotoAndPlayI_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlay
// (Final, Native, Public)
// Parameters:
// struct FString                 frame                          (Parm, NeedCtorLink)

void UGFxObject::GotoAndPlay(const struct FString& frame)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GotoAndPlay");

	UGFxObject_GotoAndPlay_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptArray
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// TArray<class UGFxObject*>      ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UGFxObject*> UGFxObject::ActionScriptArray(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptArray");

	UGFxObject_ActionScriptArray_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptObject
// (Final, Native, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::ActionScriptObject(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptObject");

	UGFxObject_ActionScriptObject_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptString
// (Final, Native, Public)
// Parameters:
// struct FString                 Method                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::ActionScriptString(const struct FString& Method)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptString");

	UGFxObject_ActionScriptString_Params params;
	params.Method = Method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptFloat
// (Final, Native, Public)
// Parameters:
// struct FString                 Method                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::ActionScriptFloat(const struct FString& Method)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptFloat");

	UGFxObject_ActionScriptFloat_Params params;
	params.Method = Method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptInt
// (Final, Native, Public)
// Parameters:
// struct FString                 Method                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::ActionScriptInt(const struct FString& Method)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptInt");

	UGFxObject_ActionScriptInt_Params params;
	params.Method = Method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptVoid
// (Final, Native, Public)
// Parameters:
// struct FString                 Method                         (Parm, NeedCtorLink)

void UGFxObject::ActionScriptVoid(const struct FString& Method)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptVoid");

	UGFxObject_ActionScriptVoid_Params params;
	params.Method = Method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Invoke
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// TArray<struct FASValue>        args                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::Invoke(const struct FString& Member, TArray<struct FASValue> args)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.Invoke");

	UGFxObject_Invoke_Params params;
	params.Member = Member;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// (Final, Native, Protected)
// Parameters:
// class UGFxObject*              Target                         (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptSetFunctionOn");

	UGFxObject_ActionScriptSetFunctionOn_Params params;
	params.Target = Target;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptSetFunction
// (Final, Native, Protected)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.ActionScriptSetFunction");

	UGFxObject_ActionScriptSetFunction_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberString
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxObject::SetElementMemberString(int Index, const struct FString& Member, const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementMemberString");

	UGFxObject_SetElementMemberString_Params params;
	params.Index = Index;
	params.Member = Member;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberFloat
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxObject::SetElementMemberFloat(int Index, const struct FString& Member, float F)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementMemberFloat");

	UGFxObject_SetElementMemberFloat_Params params;
	params.Index = Index;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberBool
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxObject::SetElementMemberBool(int Index, const struct FString& Member, bool B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementMemberBool");

	UGFxObject_SetElementMemberBool_Params params;
	params.Index = Index;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberObject
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementMemberObject");

	UGFxObject_SetElementMemberObject_Params params;
	params.Index = Index;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMember
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementMember");

	UGFxObject_SetElementMember_Params params;
	params.Index = Index;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberString
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetElementMemberString(int Index, const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementMemberString");

	UGFxObject_GetElementMemberString_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberFloat
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetElementMemberFloat(int Index, const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementMemberFloat");

	UGFxObject_GetElementMemberFloat_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberBool
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetElementMemberBool(int Index, const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementMemberBool");

	UGFxObject_GetElementMemberBool_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberObject
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementMemberObject");

	UGFxObject_GetElementMemberObject_Params params;
	params.Index = Index;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMember
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int Index, const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementMember");

	UGFxObject_GetElementMember_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementColorTransform
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FASColorTransform       cxform                         (Parm)

void UGFxObject::SetElementColorTransform(int Index, const struct FASColorTransform& cxform)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementColorTransform");

	UGFxObject_SetElementColorTransform_Params params;
	params.Index = Index;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementPosition
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UGFxObject::SetElementPosition(int Index, float X, float Y)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementPosition");

	UGFxObject_SetElementPosition_Params params;
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementVisible
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// bool                           Visible                        (Parm)

void UGFxObject::SetElementVisible(int Index, bool Visible)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementVisible");

	UGFxObject_SetElementVisible_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayMatrix
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FMatrix                 M                              (Parm)

void UGFxObject::SetElementDisplayMatrix(int Index, const struct FMatrix& M)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementDisplayMatrix");

	UGFxObject_SetElementDisplayMatrix_Params params;
	params.Index = Index;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayInfo
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FASDisplayInfo          D                              (Parm)

void UGFxObject::SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementDisplayInfo");

	UGFxObject_SetElementDisplayInfo_Params params;
	params.Index = Index;
	params.D = D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementDisplayMatrix
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementDisplayMatrix");

	UGFxObject_GetElementDisplayMatrix_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementDisplayInfo
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementDisplayInfo");

	UGFxObject_GetElementDisplayInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementString
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxObject::SetElementString(int Index, const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementString");

	UGFxObject_SetElementString_Params params;
	params.Index = Index;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementFloat
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// float                          F                              (Parm)

void UGFxObject::SetElementFloat(int Index, float F)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementFloat");

	UGFxObject_SetElementFloat_Params params;
	params.Index = Index;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementBool
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// bool                           B                              (Parm)

void UGFxObject::SetElementBool(int Index, bool B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementBool");

	UGFxObject_SetElementBool_Params params;
	params.Index = Index;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementObject
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetElementObject(int Index, class UGFxObject* val)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElementObject");

	UGFxObject_SetElementObject_Params params;
	params.Index = Index;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElement
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::SetElement(int Index, const struct FASValue& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetElement");

	UGFxObject_SetElement_Params params;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementString
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetElementString(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementString");

	UGFxObject_GetElementString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementFloat
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetElementFloat(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementFloat");

	UGFxObject_GetElementFloat_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementBool
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetElementBool(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementBool");

	UGFxObject_GetElementBool_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementObject
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// int                            Index                          (Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::GetElementObject(int Index, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElementObject");

	UGFxObject_GetElementObject_Params params;
	params.Index = Index;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElement
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::GetElement(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetElement");

	UGFxObject_GetElement_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetText
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)

void UGFxObject::SetText(const struct FString& Text, class UTranslationContext* InContext)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetText");

	UGFxObject_SetText_Params params;
	params.Text = Text;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetText
// (Final, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetText()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetText");

	UGFxObject_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetVisible
// (Final, Native, Public)
// Parameters:
// bool                           Visible                        (Parm)

void UGFxObject::SetVisible(bool Visible)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetVisible");

	UGFxObject_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix3D
// (Final, Native, Public)
// Parameters:
// struct FMatrix                 M                              (Parm)

void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetDisplayMatrix3D");

	UGFxObject_SetDisplayMatrix3D_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix
// (Final, Native, Public)
// Parameters:
// struct FMatrix                 M                              (Parm)

void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetDisplayMatrix");

	UGFxObject_SetDisplayMatrix_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColorTransform
// (Final, Native, Public)
// Parameters:
// struct FASColorTransform       cxform                         (Parm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetColorTransform");

	UGFxObject_SetColorTransform_Params params;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetPosition
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetPosition");

	UGFxObject_SetPosition_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayInfo
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FASDisplayInfo          D                              (Const, Parm, OutParm)

void UGFxObject::SetDisplayInfo(struct FASDisplayInfo* D)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetDisplayInfo");

	UGFxObject_SetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (D != nullptr)
		*D = params.D;
}


// Function GFxUI.GFxObject.GetDisplayMatrix
// (Final, Native, Public)
// Parameters:
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetDisplayMatrix");

	UGFxObject_GetDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetColorTransform
// (Final, Native, Public)
// Parameters:
// struct FASColorTransform       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetColorTransform");

	UGFxObject_GetColorTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetPosition
// (Final, Native, Public, HasOutparams)
// Parameters:
// float                          X                              (Parm, OutParm)
// float                          Y                              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetPosition(float* X, float* Y)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetPosition");

	UGFxObject_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayInfo
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FASDisplayInfo          D                              (Parm, OutParm)

void UGFxObject::GetDisplayInfo(struct FASDisplayInfo* D)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetDisplayInfo");

	UGFxObject_GetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (D != nullptr)
		*D = params.D;
}


// Function GFxUI.GFxObject.TranslateString
// (Native, Static, HasOptionalparams, Public)
// Parameters:
// struct FString                 StringToTranslate              (Parm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.TranslateString");

	UGFxObject_TranslateString_Params params;
	params.StringToTranslate = StringToTranslate;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetFunction
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UObject*                 Context                        (Parm)
// struct FName                   fname                          (Parm)

void UGFxObject::SetFunction(const struct FString& Member, class UObject* Context, const struct FName& fname)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetFunction");

	UGFxObject_SetFunction_Params params;
	params.Member = Member;
	params.Context = Context;
	params.fname = fname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetObject
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetObject(const struct FString& Member, class UGFxObject* val)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetObject");

	UGFxObject_SetObject_Params params;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetString
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)

void UGFxObject::SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetString");

	UGFxObject_SetString_Params params;
	params.Member = Member;
	params.S = S;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetFloat
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxObject::SetFloat(const struct FString& Member, float F)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetFloat");

	UGFxObject_SetFloat_Params params;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetBool
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxObject::SetBool(const struct FString& Member, bool B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.SetBool");

	UGFxObject_SetBool_Params params;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Set
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::Set(const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.Set");

	UGFxObject_Set_Params params;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetObject
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::GetObject(const struct FString& Member, class UClass* Type)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetObject");

	UGFxObject_GetObject_Params params;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetString
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetString(const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetString");

	UGFxObject_GetString_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetFloat
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetFloat(const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetFloat");

	UGFxObject_GetFloat_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetBool
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetBool(const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.GetBool");

	UGFxObject_GetBool_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.Get
// (Final, Native, Public)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::Get(const struct FString& Member)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxObject.Get");

	UGFxObject_Get_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// (Final, Defined, Private)
// Parameters:
// struct FString                 Event                          (Parm, NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.ASRemoveAllEventListeners");

	UGFxClikWidget_ASRemoveAllEventListeners_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.ASAddEventListener
// (Final, Defined, Private)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// class UGFxObject*              O                              (Parm)
// struct FString                 func                           (Parm, NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.ASAddEventListener");

	UGFxClikWidget_ASAddEventListener_Params params;
	params.Type = Type;
	params.O = O;
	params.func = func;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.SetListener
// (Final, Defined, Private)
// Parameters:
// class UGFxObject*              O                              (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FScriptDelegate         Listener                       (Parm, NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.SetListener");

	UGFxClikWidget_SetListener_Params params;
	params.O = O;
	params.Member = Member;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// (Final, Defined, Private)
// Parameters:
// struct FName                   Typename                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxClikWidget::GetEventStringFromTypename(const struct FName& Typename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.GetEventStringFromTypename");

	UGFxClikWidget_GetEventStringFromTypename_Params params;
	params.Typename = Typename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// (Defined, Public)
// Parameters:
// struct FString                 Event                          (Parm, NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.RemoveAllEventListeners");

	UGFxClikWidget_RemoveAllEventListeners_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AddEventListener
// (Defined, Public)
// Parameters:
// struct FName                   Type                           (Parm)
// struct FScriptDelegate         Listener                       (Parm, NeedCtorLink)

void UGFxClikWidget::AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.AddEventListener");

	UGFxClikWidget_AddEventListener_Params params;
	params.Type = Type;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.EventListener
// (Public, Delegate)
// Parameters:
// struct FEventData              Data                           (Parm, NeedCtorLink)

void UGFxClikWidget::EventListener(const struct FEventData& Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxClikWidget.EventListener");

	UGFxClikWidget_EventListener_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.SwfMovie.GetPathForLoadMovie
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USwfMovie::GetPathForLoadMovie()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.SwfMovie.GetPathForLoadMovie");

	USwfMovie_GetPathForLoadMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_CloseMovie::IsValidLevelSequenceObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");

	UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_GetVariable::IsValidLevelSequenceObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");

	UGFxAction_GetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_Invoke::IsValidLevelSequenceObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");

	UGFxAction_Invoke_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_OpenMovie::IsValidLevelSequenceObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");

	UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_SetVariable::IsValidLevelSequenceObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");

	UGFxAction_SetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// (Native, Event, Public)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (Parm)
// class UGFxEvent_FSCommand*     Event                          (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxFSCmdHandler_Kismet::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxFSCmdHandler_Kismet.FSCommand");

	UGFxFSCmdHandler_Kismet_FSCommand_Params params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// (Native, HasOptionalparams, Public, HasOutparams)
// Parameters:
// TArray<class UUIDataStore*>    out_BoundDataStores            (Parm, OutParm, NeedCtorLink)
// int                            BindingIndex                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxDataStoreSubscriber::SaveSubscriberValue(int BindingIndex, TArray<class UUIDataStore*>* out_BoundDataStores)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue");

	UGFxDataStoreSubscriber_SaveSubscriberValue_Params params;
	params.BindingIndex = BindingIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_BoundDataStores != nullptr)
		*out_BoundDataStores = params.out_BoundDataStores;

	return params.ReturnValue;
}


// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// (Final, Native, Public)

void UGFxDataStoreSubscriber::ClearBoundDataStores()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores");

	UGFxDataStoreSubscriber_ClearBoundDataStores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// (Final, Native, Public, HasOutparams)
// Parameters:
// TArray<class UUIDataStore*>    out_BoundDataStores            (Parm, OutParm, NeedCtorLink)

void UGFxDataStoreSubscriber::GetBoundDataStores(TArray<class UUIDataStore*>* out_BoundDataStores)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.GetBoundDataStores");

	UGFxDataStoreSubscriber_GetBoundDataStores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_BoundDataStores != nullptr)
		*out_BoundDataStores = params.out_BoundDataStores;
}


// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// (Final, Native, Public)
// Parameters:
// class UUIDataStore*            SourceDataStore                (Parm)
// bool                           bValuesInvalidated             (Parm)
// struct FName                   PropertyTag                    (Parm)
// class UUIDataProvider*         SourceProvider                 (Parm)
// int                            ArrayIndex                     (Parm)

void UGFxDataStoreSubscriber::NotifyDataStoreValueUpdated(class UUIDataStore* SourceDataStore, bool bValuesInvalidated, const struct FName& PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated");

	UGFxDataStoreSubscriber_NotifyDataStoreValueUpdated_Params params;
	params.SourceDataStore = SourceDataStore;
	params.bValuesInvalidated = bValuesInvalidated;
	params.PropertyTag = PropertyTag;
	params.SourceProvider = SourceProvider;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// int                            BindingIndex                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxDataStoreSubscriber::RefreshSubscriberValue(int BindingIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue");

	UGFxDataStoreSubscriber_RefreshSubscriberValue_Params params;
	params.BindingIndex = BindingIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// int                            BindingIndex                   (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxDataStoreSubscriber::GetDataStoreBinding(int BindingIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding");

	UGFxDataStoreSubscriber_GetDataStoreBinding_Params params;
	params.BindingIndex = BindingIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 MarkupText                     (Parm, NeedCtorLink)
// int                            BindingIndex                   (OptionalParm, Parm)

void UGFxDataStoreSubscriber::SetDataStoreBinding(const struct FString& MarkupText, int BindingIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding");

	UGFxDataStoreSubscriber_SetDataStoreBinding_Params params;
	params.MarkupText = MarkupText;
	params.BindingIndex = BindingIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// (Final, Native, Public)

void UGFxDataStoreSubscriber::PublishValues()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GFxUI.GFxDataStoreSubscriber.PublishValues");

	UGFxDataStoreSubscriber_PublishValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
