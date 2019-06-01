#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GFxUI.SwfMovie.FlashTextureRescale
//enum class EFlashTextureRescale : uint8_t
//{
//	FlashTextureScale_High         = 0,
//	FlashTextureScale_Low          = 1,
//	FlashTextureScale_NextLow      = 2,
//	FlashTextureScale_Mult4        = 3,
//	FlashTextureScale_None         = 4,
//	FlashTextureScale_MAX          = 5
//};


// Enum GFxUI.SwfMovie.SwfMovieArenas
//enum class ESwfMovieArenas : uint8_t
//{
//	SWFARENA_Global                = 0,
//	SWFARENA_Default               = 1,
//	SWFARENA_HUD                   = 2,
//	SWFARENA_StatusMenu            = 3,
//	SWFARENA_Menu                  = 4,
//	SWFARENA_MAX                   = 5
//};


// Enum GFxUI.GFxMoviePlayer.ASType
//enum class EASType : uint8_t
//{
//	AS_Undefined                   = 0,
//	AS_Null                        = 1,
//	AS_Number                      = 2,
//	AS_String                      = 3,
//	AS_Boolean                     = 4,
//	AS_MAX                         = 5
//};


// Enum GFxUI.GFxMoviePlayer.GFxAlign
//enum class EGFxAlign : uint8_t
//{
//	Align_Center                   = 0,
//	Align_TopCenter                = 1,
//	Align_BottomCenter             = 2,
//	Align_CenterLeft               = 3,
//	Align_CenterRight              = 4,
//	Align_TopLeft                  = 5,
//	Align_TopRight                 = 6,
//	Align_BottomLeft               = 7,
//	Align_BottomRight              = 8,
//	Align_MAX                      = 9
//};


// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
//enum class EGFxScaleMode : uint8_t
//{
//	SM_NoScale                     = 0,
//	SM_ShowAll                     = 1,
//	SM_ExactFit                    = 2,
//	SM_NoBorder                    = 3,
//	SM_FitVertical                 = 4,
//	SM_FitHorizontal               = 5,
//	SM_MAX                         = 6
//};


// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
//enum class EGFxTimingMode : uint8_t
//{
//	TM_Game                        = 0,
//	TM_Real                        = 1,
//	TM_MAX                         = 2
//};


// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
//enum class EGFxRenderTextureMode : uint8_t
//{
//	RTM_Opaque                     = 0,
//	RTM_Alpha                      = 1,
//	RTM_AlphaComposite             = 2,
//	RTM_MAX                        = 3
//};


// Enum GFxUI.GFxManager.EInputResult
//enum class EInputResult : uint8_t
//{
//	IR_None                        = 0,
//	IR_Handled                     = 1,
//	IR_Consumed                    = 2,
//	IR_MAX                         = 3
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x000C
struct FGCReference
{
	class UObject*                                     m_object;                                                 // 0x0000(0x0004) (Const)
	int                                                m_count;                                                  // 0x0004(0x0004)
	int                                                m_statid;                                                 // 0x0008(0x0004)
};

// ScriptStruct GFxUI.GFxManagerDefinition.AkEventResolver
// 0x000C
struct FAkEventResolver
{
	struct FName                                       Interaction;                                              // 0x0000(0x0008) (Edit)
	class UAkEvent*                                    AkEvent;                                                  // 0x0008(0x0004) (Edit)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0018
struct FASValue
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      B : 1;                                                    // 0x0004(0x0004) (Edit)
	float                                              N;                                                        // 0x0008(0x0004) (Edit)
	struct FString                                     S;                                                        // 0x000C(0x000C) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0010
struct FExternalTexture
{
	struct FString                                     Resource;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
	class UTexture*                                    Texture;                                                  // 0x000C(0x0004) (Edit)
};

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x000C
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (Edit)
	class UUISoundTheme*                               Theme;                                                    // 0x0008(0x0004) (Edit)
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxDataStoreBinding
// 0x0098
struct FGFxDataStoreBinding
{
	struct FUIDataStoreBinding                         DataSource;                                               // 0x0000(0x0030) (Edit, NeedCtorLink)
	struct FString                                     VarPath;                                                  // 0x0030(0x000C) (Edit, NeedCtorLink)
	struct FString                                     ModelId;                                                  // 0x003C(0x000C) (Edit, NeedCtorLink)
	struct FString                                     ControlId;                                                // 0x0048(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bEditable : 1;                                            // 0x0054(0x0004) (Edit)
	TArray<struct FName>                               CellTags;                                                 // 0x0058(0x000C) (Edit, NeedCtorLink)
	TArray<unsigned char>                              ModelIdUtf8;                                              // 0x0064(0x000C) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              ControlIdUtf8;                                            // 0x0070(0x000C) (Const, Transient, NeedCtorLink)
	FScriptInterface                                   ListDataProvider;                                         // 0x007C(0x0008) (Const, Transient)
	TArray<struct FName>                               FullCellTags;                                             // 0x0084(0x000C) (Const, Transient, NeedCtorLink)
	struct FPointer                                    ModelRef;                                                 // 0x0090(0x0004) (Const, Native, Transient)
	struct FPointer                                    ControlRef;                                               // 0x0094(0x0004) (Const, Native, Transient)
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x000C
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (Edit)
	class UClass*                                      WidgetClass;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                                 // 0x0000(0x0010) (Edit)
	struct FLinearColor                                Add;                                                      // 0x0010(0x0010) (Edit)
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit)
	float                                              Rotation;                                                 // 0x000C(0x0004) (Edit)
	float                                              XRotation;                                                // 0x0010(0x0004) (Edit)
	float                                              YRotation;                                                // 0x0014(0x0004) (Edit)
	float                                              XScale;                                                   // 0x0018(0x0004) (Edit)
	float                                              YScale;                                                   // 0x001C(0x0004) (Edit)
	float                                              ZScale;                                                   // 0x0020(0x0004) (Edit)
	float                                              Alpha;                                                    // 0x0024(0x0004) (Edit)
	unsigned long                                      Visible : 1;                                              // 0x0028(0x0004) (Edit)
	unsigned long                                      hasX : 1;                                                 // 0x0028(0x0004) (Edit)
	unsigned long                                      hasY : 1;                                                 // 0x0028(0x0004) (Edit)
	unsigned long                                      hasZ : 1;                                                 // 0x0028(0x0004) (Edit)
	unsigned long                                      hasRotation : 1;                                          // 0x0028(0x0004) (Edit)
	unsigned long                                      hasXRotation : 1;                                         // 0x0028(0x0004) (Edit)
	unsigned long                                      hasYRotation : 1;                                         // 0x0028(0x0004) (Edit)
	unsigned long                                      hasXScale : 1;                                            // 0x0028(0x0004) (Edit)
	unsigned long                                      hasYScale : 1;                                            // 0x0028(0x0004) (Edit)
	unsigned long                                      hasZScale : 1;                                            // 0x0028(0x0004) (Edit)
	unsigned long                                      hasAlpha : 1;                                             // 0x0028(0x0004) (Edit)
	unsigned long                                      hasVisible : 1;                                           // 0x0028(0x0004) (Edit)
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0024
struct FEventData
{
	struct FString                                     Type;                                                     // 0x0000(0x000C) (NeedCtorLink)
	int                                                Data;                                                     // 0x000C(0x0004)
	int                                                mouseIndex;                                               // 0x0010(0x0004)
	int                                                Button;                                                   // 0x0014(0x0004)
	int                                                Index;                                                    // 0x0018(0x0004)
	int                                                lastIndex;                                                // 0x001C(0x0004)
	int                                                controllerIdx;                                            // 0x0020(0x0004)
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
