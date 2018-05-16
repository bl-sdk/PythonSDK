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

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x000C
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UUISoundTheme*                               Theme;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0018
struct FASValue
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              N;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     S;                                                		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x000C
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WidgetClass;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxDataStoreBinding
// 0x0098
struct FGFxDataStoreBinding
{
	struct FUIDataStoreBinding                         DataSource;                                       		// 0x0000 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     VarPath;                                          		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ModelId;                                          		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ControlId;                                        		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bEditable : 1;                                    		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FName >                             CellTags;                                         		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            ModelIdUtf8;                                      		// 0x0064 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            ControlIdUtf8;                                    		// 0x0070 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UUIListElementProvider*                      ListDataProvider;                                 		// 0x007C (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct FName >                             FullCellTags;                                     		// 0x0084 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FPointer                                    ModelRef;                                         		// 0x0090 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    ControlRef;                                       		// 0x0094 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0010
struct FExternalTexture
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rotation;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XRotation;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YRotation;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XScale;                                           		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              YScale;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZScale;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Alpha;                                            		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Visible : 1;                                      		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      hasX : 1;                                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      hasY : 1;                                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      hasZ : 1;                                         		// 0x0028 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      hasRotation : 1;                                  		// 0x0028 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      hasXRotation : 1;                                 		// 0x0028 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      hasYRotation : 1;                                 		// 0x0028 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      hasXScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      hasYScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      hasZScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      hasAlpha : 1;                                     		// 0x0028 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      hasVisible : 1;                                   		// 0x0028 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Add;                                              		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0024
struct FEventData
{
	struct FString                                     Type;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Data;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                mouseIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Button;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                lastIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                controllerIdx;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x000C
struct FGCReference
{
	class UObject*                                     m_object;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_count;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_statid;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxManagerDefinition.AkEventResolver
// 0x000C
struct FAkEventResolver
{
	struct FName                                       Interaction;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    AkEvent;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif