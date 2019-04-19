#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GFxUI.GFxEngine
// 0x0010 (0x003C - 0x004C)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x003C(0x000C) (Transient, NeedCtorLink)
	int                                                RefCount;                                                 // 0x0048(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxEngine");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxFSCmdHandler");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxInteraction
// 0x0004 (0x0078 - 0x007C)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0078(0x0004) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxInteraction");
		return ptr;
	}


	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(int ControllerId);
};


// Class GFxUI.GFxManager
// 0x0004 (0x003C - 0x0040)
class UGFxManager : public UObject
{
public:
	class UGFxManagerDefinition*                       MyDefinition;                                             // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxManager");
		return ptr;
	}


	class UGFxMoviePlayer* GetFocusMovie(int ControllerId);
	class UAkEvent* LookupSound(const struct FName& UIEvent);
	FScriptInterface ShowDialog(class APlayerController* PC);
	void Init(class UGFxManagerDefinition* Def);
};


// Class GFxUI.GFxManagerDefinition
// 0x0018 (0x003C - 0x0054)
class UGFxManagerDefinition : public UGBXDefinition
{
public:
	class UClass*                                      ManagerClass;                                             // 0x003C(0x0004) (Edit)
	FScriptInterface                                   GFxDialogBox;                                             // 0x0040(0x0008) (Edit)
	TArray<struct FAkEventResolver>                    InteractionSounds;                                        // 0x0048(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxManagerDefinition");
		return ptr;
	}

};


// Class GFxUI.GFxMoviePlayer
// 0x018C (0x003C - 0x01C8)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                                   // 0x003C(0x0004) (Const, Native, Transient)
	struct FPointer                                    pCaptureKeys;                                             // 0x0040(0x0004) (Const, Native, Transient)
	struct FPointer                                    pFocusIgnoreKeys;                                         // 0x0044(0x0004) (Const, Native, Transient)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0048(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0084(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                            // 0x00C0(0x0004) (Const, Transient)
	class USwfMovie*                                   MovieInfo;                                                // 0x00C4(0x0004)
	unsigned long                                      bMovieIsOpen : 1;                                         // 0x00C8(0x0004) (Const)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x00C8(0x0004)
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                         // 0x00C8(0x0004) (Const, Transient)
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;                    // 0x00C8(0x0004)
	unsigned long                                      bAllowInput : 1;                                          // 0x00C8(0x0004)
	unsigned long                                      bAllowFocus : 1;                                          // 0x00C8(0x0004)
	unsigned long                                      bAutoPlay : 1;                                            // 0x00C8(0x0004)
	unsigned long                                      bPauseGameWhileActive : 1;                                // 0x00C8(0x0004)
	unsigned long                                      bCloseOnLevelChange : 1;                                  // 0x00C8(0x0004)
	unsigned long                                      bOnlyOwnerFocusable : 1;                                  // 0x00C8(0x0004)
	unsigned long                                      bForceFullViewport : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bDiscardNonOwnerInput : 1;                                // 0x00C8(0x0004)
	unsigned long                                      bCaptureInput : 1;                                        // 0x00C8(0x0004)
	unsigned long                                      bIgnoreMouseInput : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bAcceptsUnregisteredInput : 1;                            // 0x00C8(0x0004)
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                         // 0x00C8(0x0004) (Transient)
	unsigned long                                      bInputAllKeys : 1;                                        // 0x00C8(0x0004) (Edit)
	unsigned long                                      bInputOwnerOnly : 1;                                      // 0x00C8(0x0004) (Edit)
	unsigned long                                      bKeepTopMost : 1;                                         // 0x00C8(0x0004) (Transient)
	unsigned long                                      bBlurLesserMovies : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bHideLesserMovies : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bIsPriorityBlurred : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bIsPriorityHidden : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bIgnoreVisibilityEffect : 1;                              // 0x00C8(0x0004)
	unsigned long                                      bIgnoreBlurEffect : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bAllowMouseInputToFallThrough : 1;                        // 0x00C8(0x0004)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x00CC(0x0004) (Edit)
	int                                                LocalPlayerOwnerIndex;                                    // 0x00D0(0x0004) (Transient)
	class UObject*                                     ExternalInterface;                                        // 0x00D4(0x0004)
	TArray<struct FName>                               CaptureKeys;                                              // 0x00D8(0x000C) (NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x00E4(0x000C) (NeedCtorLink)
	unsigned char                                      SceneDPG;                                                 // 0x00F0(0x0001) (Edit)
	unsigned char                                      TimingMode;                                               // 0x00F1(0x0001)
	unsigned char                                      RenderTextureMode;                                        // 0x00F2(0x0001)
	unsigned char                                      Priority;                                                 // 0x00F3(0x0001)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x00F4(0x000C) (NeedCtorLink)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                              // 0x0100(0x000C) (Edit, NeedCtorLink)
	TArray<struct FGFxDataStoreBinding>                DataStoreBindings;                                        // 0x010C(0x000C) (NeedCtorLink)
	class UGFxDataStoreSubscriber*                     DataStoreSubscriber;                                      // 0x0118(0x0004) (Transient)
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x011C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0128(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0164(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.OwnedGFxObjects
	class UGFxObject*                                  SplitscreenLayoutObject;                                  // 0x01A0(0x0004) (Transient)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x01A4(0x0004) (Config)
	int                                                DepthPriority;                                            // 0x01A8(0x0004) (Transient)
	float                                              LastKeyInputTime;                                         // 0x01AC(0x0004) (Transient)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                                // 0x01B0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInputKey__Delegate;                                   // 0x01BC(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMoviePlayer");
		return ptr;
	}


	void UnregisterGFxObject(class UGFxObject* anObject);
	void RegisterGFxObject(class UGFxObject* anObject);
	void SendMousePos();
	bool IsShowingFlashMouse();
	void HookSaveScreenshot();
	void UpdateRenderTexture(class UTextureRenderTarget2D* NewRenderTexture);
	bool OnInputKey(int ControllerId, const struct FName& ukey, unsigned char uevent);
	bool WantsInput(const struct FName& ukey);
	bool WantsControllerInput(int ControllerId);
	bool InputKey(int ControllerId, const struct FName& ukey, unsigned char uevent);
	static class UGFxManager* GetGFxManager();
	static struct FString ResolveDataStoreMarkup(const struct FString& Markup);
	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void ConsoleCommand(const struct FString& Command);
	void SetLP(class ULocalPlayer* LocPlay);
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
	void Init(class ULocalPlayer* LocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path);
	void PostWidgetInit();
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* ActionScriptObject(const struct FString& Path);
	struct FString ActionScriptString(const struct FString& Path);
	float ActionScriptFloat(const struct FString& Path);
	int ActionScriptInt(const struct FString& Path);
	void ActionScriptVoid(const struct FString& Path);
	void ActionScript(const struct FString& Path);
	struct FASValue Invoke(const struct FString& Method, TArray<struct FASValue> args);
	void ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member);
	class UGFxObject* CreateArray();
	class UGFxObject* CreateObject(const struct FString& ASClass, class UClass* Type);
	bool SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg);
	bool SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg);
	bool SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg);
	bool SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg);
	bool GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg);
	bool GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg);
	bool GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg);
	bool GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg);
	void SetVariableObject(const struct FString& Path, class UGFxObject* Object);
	void SetVariableString(const struct FString& Path, const struct FString& S);
	void SetVariableNumber(const struct FString& Path, float F);
	void SetVariableBool(const struct FString& Path, bool B);
	void SetVariable(const struct FString& Path, const struct FASValue& Arg);
	class UGFxObject* GetVariableObject(const struct FString& Path, class UClass* Type);
	struct FString GetVariableString(const struct FString& Path);
	float GetVariableNumber(const struct FString& Path);
	bool GetVariableBool(const struct FString& Path);
	struct FASValue GetVariable(const struct FString& Path);
	bool FilterAxisInput(int ControllerId, const struct FName& Key, float Delta, float DeltaTime);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, unsigned char InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(const struct FName& Key);
	void ClearCaptureKeys();
	void AddCaptureKey(const struct FName& Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetSceneDPG(unsigned char NewDPG);
	void SetPerspective3D(struct FMatrix* matPersp);
	void SetView3D(struct FMatrix* matView);
	void GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1);
	void SetAlignment(unsigned char A);
	void SetViewScaleMode(unsigned char SM);
	void OnSetViewport();
	void SetViewport(int X, int Y, int Width, int Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(unsigned char NewPriority);
	void PublishDataStoreValues();
	void RefreshDataStoreBindings();
	bool SetExternalTexture(const struct FString& Resource, class UTexture* Texture);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(unsigned char Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void ConditionalClearPause();
	void OnCleanup();
	void OnClose();
	void Close(bool Unload);
	void SetPause(bool bPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool Start(bool StartPaused);
};


// Class GFxUI.GFxMovie
// 0x0000 (0x01C8 - 0x01C8)
class UGFxMovie : public UGFxMoviePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovie");
		return ptr;
	}

};


// Class GFxUI.GFxObject
// 0x003C (0x003C - 0x0078)
class UGFxObject : public UObject
{
public:
	int                                                Value[0xC];                                               // 0x003C(0x0004) (Const, Native)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                                        // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxObject");
		return ptr;
	}


	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool MouseHitTest();
	bool HitTest(int TestX, int TestY, bool bTestShape);
	int _HitTest(int TestX, int TestY, bool bTestShape);
	float GetNextHighestDepth();
	void RemoveMovieClip();
	class UGFxObject* AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type);
	class UGFxObject* CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type);
	void GotoAndStopI(int frame);
	void GotoAndStop(const struct FString& frame);
	void GotoAndPlayI(int frame);
	void GotoAndPlay(const struct FString& frame);
	TArray<class UGFxObject*> ActionScriptArray(const struct FString& Path);
	class UGFxObject* ActionScriptObject(const struct FString& Path);
	struct FString ActionScriptString(const struct FString& Method);
	float ActionScriptFloat(const struct FString& Method);
	int ActionScriptInt(const struct FString& Method);
	void ActionScriptVoid(const struct FString& Method);
	struct FASValue Invoke(const struct FString& Member, TArray<struct FASValue> args);
	void ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member);
	void ActionScriptSetFunction(const struct FString& Member);
	void SetElementMemberString(int Index, const struct FString& Member, const struct FString& S);
	void SetElementMemberFloat(int Index, const struct FString& Member, float F);
	void SetElementMemberBool(int Index, const struct FString& Member, bool B);
	void SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val);
	void SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg);
	struct FString GetElementMemberString(int Index, const struct FString& Member);
	float GetElementMemberFloat(int Index, const struct FString& Member);
	bool GetElementMemberBool(int Index, const struct FString& Member);
	class UGFxObject* GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type);
	struct FASValue GetElementMember(int Index, const struct FString& Member);
	void SetElementColorTransform(int Index, const struct FASColorTransform& cxform);
	void SetElementPosition(int Index, float X, float Y);
	void SetElementVisible(int Index, bool Visible);
	void SetElementDisplayMatrix(int Index, const struct FMatrix& M);
	void SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D);
	struct FMatrix GetElementDisplayMatrix(int Index);
	struct FASDisplayInfo GetElementDisplayInfo(int Index);
	void SetElementString(int Index, const struct FString& S);
	void SetElementFloat(int Index, float F);
	void SetElementBool(int Index, bool B);
	void SetElementObject(int Index, class UGFxObject* val);
	void SetElement(int Index, const struct FASValue& Arg);
	struct FString GetElementString(int Index);
	float GetElementFloat(int Index);
	bool GetElementBool(int Index);
	class UGFxObject* GetElementObject(int Index, class UClass* Type);
	struct FASValue GetElement(int Index);
	void SetText(const struct FString& Text, class UTranslationContext* InContext);
	struct FString GetText();
	void SetVisible(bool Visible);
	void SetDisplayMatrix3D(const struct FMatrix& M);
	void SetDisplayMatrix(const struct FMatrix& M);
	void SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(struct FASDisplayInfo* D);
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float* X, float* Y);
	void GetDisplayInfo(struct FASDisplayInfo* D);
	static struct FString TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext);
	void SetFunction(const struct FString& Member, class UObject* Context, const struct FName& fname);
	void SetObject(const struct FString& Member, class UGFxObject* val);
	void SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext);
	void SetFloat(const struct FString& Member, float F);
	void SetBool(const struct FString& Member, bool B);
	void Set(const struct FString& Member, const struct FASValue& Arg);
	class UGFxObject* GetObject(const struct FString& Member, class UClass* Type);
	struct FString GetString(const struct FString& Member);
	float GetFloat(const struct FString& Member);
	bool GetBool(const struct FString& Member);
	struct FASValue Get(const struct FString& Member);
};


// Class GFxUI.GFxClikWidget
// 0x000C (0x0078 - 0x0084)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                                // 0x0078(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxClikWidget");
		return ptr;
	}


	void ASRemoveAllEventListeners(const struct FString& Event);
	void ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener);
	struct FString GetEventStringFromTypename(const struct FName& Typename);
	void RemoveAllEventListeners(const struct FString& Event);
	void AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener);
	void EventListener(const struct FEventData& Data);
};


// Class GFxUI.GFxRawData
// 0x0030 (0x003C - 0x006C)
class UGFxRawData : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                                  // 0x003C(0x000C) (Const, NeedCtorLink)
	TArray<struct FString>                             ReferencedSwfs;                                           // 0x0048(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             References;                                               // 0x0054(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             UserReferences;                                           // 0x0060(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxRawData");
		return ptr;
	}

};


// Class GFxUI.SwfMovie
// 0x0048 (0x006C - 0x00B4)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                         // 0x006C(0x0004) (Edit)
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                           // 0x006C(0x0004) (Edit, EditConst)
	unsigned long                                      bPackTextures : 1;                                        // 0x006C(0x0004) (Edit)
	unsigned long                                      bPreload : 1;                                             // 0x006C(0x0004) (Edit)
	unsigned long                                      bDoNotPlaceInVM : 1;                                      // 0x006C(0x0004) (Edit)
	int                                                PackTextureSize;                                          // 0x0070(0x0004) (Edit)
	unsigned char                                      TextureRescale;                                           // 0x0074(0x0001) (Edit)
	unsigned char                                      DesiredMemArena;                                          // 0x0075(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	struct FString                                     TextureFormat;                                            // 0x0078(0x000C) (Edit, EditConst, NeedCtorLink)
	int                                                RTTextures;                                               // 0x0084(0x0004)
	int                                                RTVideoTextures;                                          // 0x0088(0x0004)
	int                                                MovieInfo[0x9];                                           // 0x008C(0x0004) (Const, Native, Transient)
	struct FPointer                                    pMovieDef;                                                // 0x00B0(0x0004) (Const, Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SwfMovie");
		return ptr;
	}


	struct FString GetPathForLoadMovie();
};


// Class GFxUI.FlashMovie
// 0x0000 (0x00B4 - 0x00B4)
class UFlashMovie : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FlashMovie");
		return ptr;
	}

};


// Class GFxUI.GFxMovieInfo
// 0x0000 (0x00B4 - 0x00B4)
class UGFxMovieInfo : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieInfo");
		return ptr;
	}

};


// Class GFxUI.GFxValue
// 0x0030 (0x003C - 0x006C)
class UGFxValue : public UObject
{
public:
	int                                                Value[0xC];                                               // 0x003C(0x0004) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxValue");
		return ptr;
	}

};


// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x00A4 - 0x00AC)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00A4(0x0004)
	unsigned long                                      bUnload : 1;                                              // 0x00A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxAction_CloseMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x00A4 - 0x00B4)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00A4(0x0004)
	struct FString                                     Variable;                                                 // 0x00A8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxAction_GetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_Invoke
// 0x001C (0x00A4 - 0x00C0)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00A4(0x0004)
	struct FString                                     MethodName;                                               // 0x00A8(0x000C) (Edit, NeedCtorLink)
	TArray<struct FASValue>                            Arguments;                                                // 0x00B4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxAction_Invoke");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_OpenMovie
// 0x0034 (0x00A4 - 0x00D8)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x00A4(0x0004) (Edit)
	class UClass*                                      MoviePlayerClass;                                         // 0x00A8(0x0004) (Edit)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // 0x00AC(0x0004)
	class UGFxMoviePlayer*                             LegacyMovieObject;                                        // 0x00B0(0x0004) (Edit)
	unsigned long                                      bTakeFocus : 1;                                           // 0x00B4(0x0004) (Edit)
	unsigned long                                      bCaptureInput : 1;                                        // 0x00B4(0x0004) (Edit)
	unsigned long                                      bStartPaused : 1;                                         // 0x00B4(0x0004) (Edit)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x00B4(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x00B4(0x0004) (Edit)
	unsigned char                                      RenderTextureMode;                                        // 0x00B8(0x0001) (Edit)
	unsigned char                                      ScaleMode;                                                // 0x00B9(0x0001) (Edit)
	unsigned char                                      AlignMode;                                                // 0x00BA(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x00BC(0x0004) (Edit)
	TArray<struct FName>                               CaptureKeys;                                              // 0x00C0(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x00CC(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxAction_OpenMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x00A4 - 0x00B4)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00A4(0x0004)
	TArray<struct FName>                               CaptureKeys;                                              // 0x00A8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxAction_SetCaptureKeys");
		return ptr;
	}

};


// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x00A4 - 0x00B4)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00A4(0x0004)
	struct FString                                     Variable;                                                 // 0x00A8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxAction_SetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxEvent_FSCommand
// 0x0014 (0x00C4 - 0x00D8)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x00C4(0x0004) (Edit)
	struct FString                                     FSCommand;                                                // 0x00C8(0x000C) (Edit, NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                                  // 0x00D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxEvent_FSCommand");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxFSCmdHandler_Kismet");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxDataStoreSubscriber
// 0x0008 (0x003C - 0x0044)
class UGFxDataStoreSubscriber : public UObject
{
public:
	struct FPointer                                    VfTable_IUIDataStorePublisher;                            // 0x003C(0x0004) (Const, Native, NoExport)
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxDataStoreSubscriber");
		return ptr;
	}


	bool SaveSubscriberValue(int BindingIndex, TArray<class UUIDataStore*>* out_BoundDataStores);
	void ClearBoundDataStores();
	void GetBoundDataStores(TArray<class UUIDataStore*>* out_BoundDataStores);
	void NotifyDataStoreValueUpdated(class UUIDataStore* SourceDataStore, bool bValuesInvalidated, const struct FName& PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex);
	bool RefreshSubscriberValue(int BindingIndex);
	struct FString GetDataStoreBinding(int BindingIndex);
	void SetDataStoreBinding(const struct FString& MarkupText, int BindingIndex);
	void PublishValues();
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
